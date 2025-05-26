cmake_minimum_required(VERSION 3.31)
project(medimaxzut)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Replace your Qt path logic with this:
if(NOT DEFINED Qt6_DIR AND DEFINED ENV{Qt6_DIR})
    set(Qt6_DIR "$ENV{Qt6_DIR}" CACHE PATH "Path to Qt6 CMake files")
endif()

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

# Get the correct Qt installation path
get_target_property(QT_LIB_LOCATION Qt6::Core LOCATION)
get_filename_component(QT_INSTALL_PATH "${QT_LIB_LOCATION}" DIRECTORY)
get_filename_component(QT_INSTALL_PATH "${QT_INSTALL_PATH}/../.." ABSOLUTE)
message(STATUS "Qt6 installation path: ${QT_INSTALL_PATH}")  # Debug output

# MariaDB include check
set(MDB_DIR $ENV{MDB})
if(NOT EXISTS "${MDB_DIR}/include/mariadb/conncpp.hpp")
    message(FATAL_ERROR "MariaDB Connector/C++ headers not found in ${MDB_DIR}/include")
endif()

include_directories("${MDB_DIR}/include")
link_directories("${MDB_DIR}")

# Find Qt6
find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

# Add executable BEFORE linking
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
)
add_custom_command(TARGET medimaxzut POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${QT_INSTALL_PATH}/bin/Qt6Core.dll"
        "${QT_INSTALL_PATH}/bin/Qt6Widgets.dll"
        "$<TARGET_FILE_DIR:medimaxzut>"
)

# oraz folder "platforms":
add_custom_command(TARGET medimaxzut POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E make_directory
        "$<TARGET_FILE_DIR:medimaxzut>/plugins/platforms"
)
add_custom_command(TARGET medimaxzut POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${QT_INSTALL_PATH}/plugins/platforms/qwindows.dll"
        "$<TARGET_FILE_DIR:medimaxzut>/plugins/platforms"
)

# Link all libraries at once
target_link_libraries(medimaxzut
        Qt6::Core
        Qt6::Widgets
        mariadbcpp
)

# DLL copying logic (unchanged, optional)
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

# MariaDB DLL
if(WIN32)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${MDB_DIR}/mariadbcpp.dll"
            "$<TARGET_FILE_DIR:${PROJECT_NAME}>"
    )
endif ()

# message(STATUS "Using Qt from: ${Qt5Widgets_INCLUDE_DIRS}")
