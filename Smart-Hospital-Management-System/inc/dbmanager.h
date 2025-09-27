#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QString>
#include <QList>

class DbManager {
public:
    static DbManager& getInstance();
    bool openDatabase(const QString& path);
    void closeDatabase();
    bool addUser(const QString& username, const QString& password, const QString& userType = "user");
    bool removeUser(const QString& username);
    bool userExists(const QString& username) const;
    QList<QString> getAllUsers() const;
    bool updatePassword(const QString& username, const QString& newPassword);
    QSqlDatabase getDatabase() const { return m_db; }

private:
    DbManager();
    ~DbManager();
    DbManager(const DbManager&) = delete;
    DbManager& operator=(const DbManager&) = delete;

    static DbManager* instance_; // Static instance for singleton
    QSqlDatabase m_db;
};

#endif // DBMANAGER_H
