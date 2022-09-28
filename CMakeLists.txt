cmake_minimum_required(VERSION 3.9)

project (test CXX)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(my_app main.cc my_app.h)

target_link_libraries(my_app Qt6::Core Qt6::Gui Qt6::Widgets)

