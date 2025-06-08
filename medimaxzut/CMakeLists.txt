cmake_minimum_required(VERSION 3.31)
project(medimaxzut)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(DEFINED ENV{QT_DIR})
    list(APPEND CMAKE_PREFIX_PATH "$ENV{QT_DIR}")
endif()

set(MDB_DIR $ENV{MDB})
if(NOT EXISTS "${MDB_DIR}/include/mariadb/conncpp.hpp")
    message(FATAL_ERROR "MariaDB Connector/C++ headers not found in ${MDB_DIR}/include")
endif()

include_directories("${MDB_DIR}/include")
link_directories("${MDB_DIR}")

find_package(Qt6 COMPONENTS Core REQUIRED)
find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(medimaxzut
        main.cpp
        login/login.h
        login/loginWindow.h
        login/login.cpp
        mainWindow/mainwindow.h
        mainWindow/mainwindow.cpp
        mainWindow/navibutton.h
        mainWindow/navibutton.cpp
        baza.h
        mainWindow/buttonName.h
        userList/listuser.cpp
        userList/listitem.cpp
        mailList/listmail.cpp
        mailList/mailitem.cpp
        mailList/mailitem.h
        mailList/mailext.cpp
        prescriptionAdd/prescriptionitem.cpp
        prescriptionAdd/prescriptionwindow.cpp
        session.h
        store/storewindow.cpp
        store/storewindow.h
        store/storeitem.cpp
        store/storeitem.h
        schedule/scheduleview.cpp
        schedule/schedulecell.cpp
        newPatient/newpatient.cpp
        newPatient/newpatientdoctorlistitem.cpp
        schedule/schedulecellempty.cpp
        lists.h
)

target_link_libraries(medimaxzut
        Qt6::Core
        Qt6::Widgets
        mariadbcpp
)

if (WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(DEBUG_SUFFIX "")
    if (MSVC AND CMAKE_BUILD_TYPE MATCHES "Debug")
        set(DEBUG_SUFFIX "d")
    endif ()

    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()

    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif ()

    foreach (QT_LIB Core)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt6${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach ()
endif ()

if(WIN32)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${MDB_DIR}/mariadbcpp.dll"
            "$<TARGET_FILE_DIR:${PROJECT_NAME}>"
    )
endif()