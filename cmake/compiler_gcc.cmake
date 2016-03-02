CMAKE_MINIMUM_REQUIRED (VERSION 2.8.3)
### Set build-directive (used in core to tell which buildtype we used)
### 设置构建-指令

# 设置编译器
SET(CMAKE_CXX_COMPILER "g++")

# 设置编译类型宏
add_definitions(-D_BUILD_DIRECTIVE='"${CMAKE_BUILD_TYPE}"')

add_definitions(-fno-delete-null-pointer-checks)

if( USE_SFMT)
  if(PLATFORM EQUAL 32)
    # Required on 32-bit systems to enable SSE2 (standard on x64)
	# 所需的32位系统使SSE 2（标准版）
    add_definitions(-msse2 -mfpmath=sse)
  endif()
  add_definitions(-DHAVE_SSE2 -D__SSE2__)
  message(STATUS "GCC: SFMT enabled, SSE2 flags forced")
endif()

# 警告
if( WITH_WARNINGS )
  add_definitions(-Wall -Wfatal-errors -Wextra)
  message(STATUS "GCC: All warnings enabled")
else()
  add_definitions(--no-warnings)
  message(STATUS "GCC: All warnings disabled")
endif()

# 调试模式
if( WITH_COREDEBUG )
  add_definitions(-ggdb3)
  message(STATUS "GCC: Debug-flags set (-ggdb3)")
endif()
