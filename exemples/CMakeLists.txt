cmake_minimum_required(VERSION 3.16)

# Create project
project(Exemples VERSION 1.10)


# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

# Redirect all executables to build directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Get all subdirectories from src
file(GLOB sub_dir RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} src/*)

# Add executable
add_executable(${PROJECT_NAME} src/main.cpp)

# Add subdirectory and include
foreach(DIR ${sub_dir})
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${DIR})
        add_subdirectory(${DIR})
        target_include_directories(${PROJECT_NAME} PUBLIC ${DIR})
    endif()
endforeach()

# Link Libraries
target_link_libraries(${PROJECT_NAME} PUBLIC HelloWidget_lib)





