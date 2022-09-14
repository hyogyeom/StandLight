cmake_minimum_required(VERSION 3.0.0)

project(StandLight)

add_executable(${PROJECT_NAME}
    ./src/main.cpp
    ./src/app/Listener/Listener.cpp
    ./src/app/Controller/Controller.cpp
    ./src/app/View/View.cpp
    ./src/hw/Button/Button.cpp
    ./src/hw/Led/Led.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ./src/app/Listener
    ./src/hw/Button
    ./src/app/Controller
    ./src/app/View
    ./src/hw/Led
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    -lwiringPi
)

target_compile_options(${PROJECT_NAME}  PUBLIC
    -Wall
)