cmake_minimum_required(VERSION 3.28)
set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VESRION 0.0.${PATCH_VERSION})
project(editor VERSION ${PROJECT_VESRION})

set(CMAKE_CXX_STANDARD 17)

add_executable(editor main.cpp)

option(WITH_BOOST_TEST "Whether to build Boost test" ON)

configure_file(version.h.in version.h)

if (MSVC)
    target_compile_options(editor PRIVATE
            /W4
    )
    target_compile_options(editor PRIVATE
            /W4
    )
    if(WITH_BOOST_TEST)
        target_compile_options(test_version PRIVATE
                /W4
        )
    endif()
else ()
    target_compile_options(editor PRIVATE
            -Wall -Wextra -pedantic -Werror
    )
    target_compile_options(editor PRIVATE
            -Wall -Wextra -pedantic -Werror
    )
    if(WITH_BOOST_TEST)
        target_compile_options(editor PRIVATE
                -Wall -Wextra -pedantic -Werror
        )
    endif()
endif()

install(TARGETS editor RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
set(CPACK_PACKAGE_CONTACT example@example.com)
include(CPack)

if(WITH_BOOST_TEST)
    enable_testing()
    add_test(editor editor)
endif()

add_subdirectory(model)
add_subdirectory(view)
add_subdirectory(controller)

target_link_libraries(${PROJECT_NAME} model view controller)
