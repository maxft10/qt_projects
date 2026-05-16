cmake_minimum_required(VERSION 3.16)

# Create project
project(HelloWidget VERSION 1.10)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

# Active auto-compilation of MOC, RCC and UI files
set(CMAKE_AUTOMOC on)
set(CMAKE_AUTORCC on)
set(CMAKE_AUTOUIC on)

# find Qt6 package and its components
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets)


# Add library
add_library(${PROJECT_NAME}_lib STATIC ./HelloWidget.cpp)
target_link_libraries(${PROJECT_NAME}_lib
                        PUBLIC Qt6::Core
                               Qt6::Gui
                               Qt6::Widgets)

# Add Executable
add_executable(${PROJECT_NAME} ./main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC ${PROJECT_NAME}_lib )
