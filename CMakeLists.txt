cmake_minimum_required(VERSION 3.10)
project(qt5_template)

set(CMAKE_CXX_STANDARD 11)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets)

add_executable(qt5_template
        main.cpp
        OpenGLWindow.cpp OpenGLWindow.h
        TriangleWindow.cpp TriangleWindow.h)

# Use the Widgets module from Qt 5.
target_link_libraries(qt5_template Qt5::Widgets)