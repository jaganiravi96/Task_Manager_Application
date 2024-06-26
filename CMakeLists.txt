cmake_minimum_required(VERSION 3.5)

project(Task_Manager_Application VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)
set(CMAKE_CXX_SOURCE_FILE_EXTENSIONS C;M;c++;cc;cpp;cxx;mm;CPP;h;txt)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Task_Manager_Application
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        addtask.h addtask.cpp addtask.ui
        updatetask.h updatetask.cpp updatetask.ui
        deletetask.h deletetask.cpp deletetask.ui
        displayalltask.h displayalltask.cpp displayalltask.ui
        gettask.h gettask.cpp gettask.ui
        generatereport.h generatereport.cpp generatereport.ui

        src/Model/idsequence.h src/Model/idsequence.cpp
        src/Model/task.h src/Model/task.cpp
        src/Service/fileutils.h src/Service/fileutils.cpp
        src/Service/strutils.h src/Service/strutils.cpp
        src/Service/taskservice.h src/Service/taskservice.cpp
        src/Repository/test.h src/Repository/test.cpp
        src/Model/tasktablemodel.h src/Model/tasktablemodel.cpp

    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Task_Manager_Application APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Task_Manager_Application SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Task_Manager_Application
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Task_Manager_Application PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Task_Manager_Application)
endif()
set_target_properties(Task_Manager_Application PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Task_Manager_Application
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Task_Manager_Application)
endif()
