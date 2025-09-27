#include "dbmanager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QCoreApplication>

// Define static instance
DbManager* DbManager::instance_ = nullptr;

// Singleton accessor
DbManager& DbManager::getInstance() {
    if (!instance_) {
        instance_ = new DbManager();
    }
    return *instance_;
}

// Constructor
DbManager::DbManager() {
    // Use path relative to executable (build/database/hospital.db)
    QString dbPath = QCoreApplication::applicationDirPath() + "/database/hospital.db";
    if (!openDatabase(dbPath)) {
        qDebug() << "Error: Failed to connect to database at" << dbPath << ":" << m_db.lastError().text();
    }
}

// Destructor: Close database connection
DbManager::~DbManager() {
    closeDatabase();
}

// Open database with a unique connection name
bool DbManager::openDatabase(const QString& path) {
    static const QString connName = "hospital_conn";
    
    // Check if connection already exists
    if (QSqlDatabase::contains(connName)) {
        m_db = QSqlDatabase::database(connName);
        if (m_db.isOpen()) {
            qDebug() << "Database is already open at" << path;
            return true;
        }
        // Remove stale connection
        QSqlDatabase::removeDatabase(connName);
    }

    m_db = QSqlDatabase::addDatabase("QSQLITE", connName);
    m_db.setDatabaseName(path);
    qDebug() << "Attempting to open database at:" << path;

    if (!m_db.open()) {
        qDebug() << "Error: Connection with database failed:" << m_db.lastError().text();
        return false;
    }
    qDebug() << "Database: Connection ok";
    return true;
}

// Close database connection
void DbManager::closeDatabase() {
    if (m_db.isOpen()) {
        m_db.close();
    }
    QSqlDatabase::removeDatabase("hospital_conn");
}

// Add user with userType
bool DbManager::addUser(const QString& username, const QString& password, const QString& userType) {
    QSqlQuery query(m_db);
    query.prepare("INSERT INTO users (username, password, userType) VALUES (:username, :password, :userType)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);  // TODO: Hash passwords in production
    query.bindValue(":userType", userType);

    if (!query.exec()) {
        qDebug() << "addUser error:" << query.lastError().text();
        return false;
    }
    return true;
}

// Remove user
bool DbManager::removeUser(const QString& username) {
    QSqlQuery query(m_db);
    query.prepare("DELETE FROM users WHERE username = :username");
    query.bindValue(":username", username);

    if (!query.exec()) {
        qDebug() << "removeUser error:" << query.lastError().text();
        return false;
    }
    return true;
}

// Check if user exists
bool DbManager::userExists(const QString& username) const {
    QSqlQuery query(m_db);
    query.prepare("SELECT username FROM users WHERE username = :username");
    query.bindValue(":username", username);

    if (query.exec() && query.next()) {
        return true;
    }
    qDebug() << "userExists error:" << query.lastError().text();
    return false;
}

// Get all users
QList<QString> DbManager::getAllUsers() const {
    QList<QString> users;
    QSqlQuery query("SELECT username FROM users", m_db);

    while (query.next()) {
        users.append(query.value(0).toString());
    }
    return users;
}

// Update password
bool DbManager::updatePassword(const QString& username, const QString& newPassword) {
    QSqlQuery query(m_db);
    query.prepare("UPDATE users SET password = :password WHERE username = :username");
    query.bindValue(":password", newPassword);  // TODO: Hash passwords in production
    query.bindValue(":username", username);

    if (!query.exec()) {
        qDebug() << "updatePassword error:" << query.lastError().text();
        return false;
    }
    return true;
}
