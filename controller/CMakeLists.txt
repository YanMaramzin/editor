project(controller LANGUAGES CXX)

add_library(${PROJECT_NAME} INTERFACE
    editorcontroller.h
)

target_include_directories(${PROJECT_NAME} INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
)