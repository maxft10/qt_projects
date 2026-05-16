cmake_minimum_required(VERSION 3.16)

# Set Project
project(SliderWidget VERSION 1.10)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

# Activate auto-compilation for MOC, UI and RCC files
set(CMAKE_AUTOMOC on)
set(CMAKE_AUTORCC on)
set(CMAKE_AUTOUIC on)

# Find Qt6 package and its component
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)

# Add library
add_library(${PROJECT_NAME}_lib STATIC ./SliderWidget.cpp)
target_link_libraries(${PROJECT_NAME}_lib
                        PUBLIC Qt6::Core
                               Qt6::Gui
                               Qt6::Widgets)

# Add executable
add_executable(${PROJECT_NAME} ./main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC ${PROJECT_NAME}_lib)
target_include_directories(${PROJECT_NAME} PUBLIC .)