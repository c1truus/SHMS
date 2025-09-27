cmake_minimum_required(VERSION 3.5)

project(SmartHealthcareSystem VERSION 0.1 LANGUAGES CXX)

# Enable automatic handling of UIC, MOC, and RCC
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Set the C++ standard to 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

# Search paths for .ui files
set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_CURRENT_SOURCE_DIR}/ui)

# Find Qt components (support Qt5 or Qt6)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql)

# List of source files
set(SOURCES
    src/main.cpp
    src/loginwindow.cpp
    src/mainwindow.cpp
    src/registrationwindow.cpp
    src/patientwindow.cpp
    src/doctorwindow.cpp
    src/healthassessmentwindow.cpp
    src/communicationwindow.cpp
    src/informationmanagementwindow.cpp
    src/diagnosiswindow.cpp
    src/photouploadwindow.cpp
    src/editinfowindow.cpp
    src/appointmentswindow.cpp
    src/dbmanager.cpp
    #    src/helloworld.cpp  # Included; remove if not needed
)

# List of header files
set(HEADERS
    inc/loginwindow.h
    inc/mainwindow.h
    inc/registrationwindow.h
    inc/patientwindow.h
    inc/doctorwindow.h
    inc/healthassessmentwindow.h
    inc/communicationwindow.h
    inc/informationmanagementwindow.h
    inc/diagnosiswindow.h
    inc/photouploadwindow.h
    inc/editinfowindow.h
    inc/appointmentswindow.h
    inc/dbmanager.h
    #inc/helloworld.h  # Included; remove if not needed
)

# List of UI files
set(UI_FILES
    ui/loginwindow.ui
    ui/mainwindow.ui
    ui/registrationwindow.ui
    ui/patientwindow.ui
    ui/doctorwindow.ui
    ui/healthassessmentwindow.ui
    ui/communicationwindow.ui
    ui/informationmanagementwindow.ui
    ui/diagnosiswindow.ui
    ui/photouploadwindow.ui
    ui/editinfowindow.ui
    ui/appointmentswindow.ui
)

# Configure the executable
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(SmartHealthcareSystem
        MANUAL_FINALIZATION
        ${SOURCES}
        ${HEADERS}
        ${UI_FILES}
    )
else()
    add_executable(SmartHealthcareSystem
        ${SOURCES}
        ${HEADERS}
        ${UI_FILES}
    )
endif()

# Link libraries
target_link_libraries(SmartHealthcareSystem PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Sql)

# Copy database to build directory
configure_file(database/hospital.db database/hospital.db COPYONLY)

# Set properties for macOS bundle or Windows executable
set_target_properties(SmartHealthcareSystem PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.SmartHealthcareSystem
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Install rules
include(GNUInstallDirs)
install(TARGETS SmartHealthcareSystem
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Finalize for Qt6 if necessary
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(SmartHealthcareSystem)
endif()

