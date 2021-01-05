cmake_minimum_required(VERSION 3.17)

option(HUNTER_STATUS_DEBUG "" YES)
set(HUNTER_ROOT "${CMAKE_CURRENT_BINARY_DIR}/hunter-root"
    CACHE PATH "")

file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/HunterConfig.cmake" [=[
hunter_config(ZLIB
              VERSION "${HUNTER_ZLIB_VERSION}")
]=])
set(HUNTER_URL "https://github.com/cpp-pm/hunter/archive/v0.23.289.tar.gz")
set(HUNTER_SHA1 "7d7323704780200a1575fc089d26f8a8a393a1fa")
set(HUNTER_FILEPATH_CONFIG "${CMAKE_CURRENT_BINARY_DIR}/HunterConfig.cmake")

# Setting up ZLIB as an external package
#set(HUNTER_PACKAGES "ZLIB")

include(FetchContent)
fetchcontent_declare(SetupHunter GIT_REPOSITORY https://github.com/cpp-pm/gate)
fetchcontent_makeavailable(SetupHunter)

project(cmake-hunter-test
        LANGUAGES
        C
        CXX) # required or Hunter fails with "ABI not detected for CXX compiler". Not too happy about that

# zlib will be an optional dependency
hunter_add_package(ZLIB)
find_package(ZLIB CONFIG REQUIRED)

#add_executable(boo main.c)
#target_link_libraries(boo PRIVATE ZLIB::zlib)
#
#add_executable(baz main.c)
#target_link_libraries(baz PRIVATE ZLIB::ZLIB)
