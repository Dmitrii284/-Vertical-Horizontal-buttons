
cmake_minimum_required(VERSION 3.27)

project(Horizontal_buttons)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets)

set(SOURCES
        main.cpp

)

set(HEADERS

)

add_executable(Horizontal_buttons ${SOURCES} ${HEADERS})
target_link_libraries(Horizontal_buttons Qt5::Widgets)