project(model LANGUAGES CXX)

add_library(${PROJECT_NAME} INTERFACE
    circle.h
    document.h
    rectangle.h
    graphicobject.h
)

target_include_directories(${PROJECT_NAME} INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)