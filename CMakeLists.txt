cmake_minimum_required(VERSION 3.17)

set(BUILD_SHARED_LIBS YES)
set(HUNTER_STATUS_DEBUG YES CACHE BOOL "")
set(HUNTER_ROOT "${CMAKE_CURRENT_BINARY_DIR}/hunter" CACHE PATH "Path to Hunter root directory.")
set(HUNTER_BUILD_SHARED_LIBS NO)
list(APPEND HUNTER_PACKAGES "ZLIB")
if(BUILD_SHARED_LIBS)
    list(APPEND HUNTER_ZLIB_CMAKE_ARGS
         "CMAKE_POSITION_INDEPENDENT_CODE:BOOL=YES")
endif()
# Setting up ZLIB as an external package
set(HUNTER_PACKAGES ZLIB)

include(FetchContent)
fetchcontent_declare(SetupHunter GIT_REPOSITORY https://github.com/cpp-pm/gate)
fetchcontent_makeavailable(SetupHunter)

project(cmake-hunter-test
        LANGUAGES
        C)

file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/test.xp" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")
find_package(ZLIB REQUIRED)
add_executable(boo main.c)
target_link_libraries(boo PRIVATE ZLIB::ZLIB)

