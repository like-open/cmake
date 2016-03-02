CMAKE_MINIMUM_REQUIRED(VERSION 2.8.3)

MESSAGE(STATUS ">>>>CMakeLists:" ${CMAKE_CURRENT_SOURCE_DIR})

INCLUDE(${CMAKE_CURRENT_LIST_DIR}/../../../cmake/config.cmake)

# 包含目录
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_LIST_DIR}/include)

# 源文件列表
FILE(GLOB_RECURSE _file_list ${CMAKE_CURRENT_LIST_DIR}/*.*)

# 建立工程
ADD_LIBRARY("example-lib" $_file_list)	
