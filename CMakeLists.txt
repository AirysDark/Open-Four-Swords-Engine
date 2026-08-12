cmake_minimum_required(VERSION 3.16)
project(OpenFourSwordsEngine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(engine)

add_executable(OpenFourSwordsEngine main.cpp)
target_link_libraries(OpenFourSwordsEngine PRIVATE EngineCore)
