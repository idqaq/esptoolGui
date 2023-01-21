cmake_minimum_required(VERSION 3.20)
project(MCUtool)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        SerialPort
        Widgets
        REQUIRED)

add_executable(esptoolGui main.cpp layout.cpp layout.h layout.ui)
target_link_libraries(esptoolGui
        Qt::Core
        Qt::Gui
        Qt::SerialPort
        Qt::Widgets
        )
