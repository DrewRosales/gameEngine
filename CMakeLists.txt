cmake_minimum_required(VERSION 3.5)
set (CMAKE_CXX_STANDARD 17)
project(engine)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# turn off building GLFW docs, tests, and examples
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

# GLFW
add_subdirectory("${CMAKE_SOURCE_DIR}/dependencies/glfw")

#OpenGL
find_package(OpenGL REQUIRED)

#GLOG
find_package(glog REQUIRED)

# GLAD
set(GLAD_SRC
  ${CMAKE_SOURCE_DIR}/dependencies/glad/src
)

# ----------------------------------------
# INCLUDES
# ----------------------------------------

include_directories(${PROJECT_NAME} PUBLIC
  ${CMAKE_SOURCE_DIR}/engine
  ${CMAKE_SOURCE_DIR}/engine/include
  ${CMAKE_SOURCE_DIR}/dependencies/glad/include
)

# ----------------------------------------
# SOURCES
# ----------------------------------------

set(ENGINE_SRC
  engine/src/Application.cpp
  ${GLAD_SRC}/glad.c
)
# ----------------------------------------
# EXECUTABLE
# ----------------------------------------

add_library(${PROJECT_NAME}  ${ENGINE_SRC})

# ----------------------------------------
# DEPENDENCIES
# ----------------------------------------

target_link_libraries(${PROJECT_NAME} PUBLIC
  glfw
  OpenGL::GL
  glog::glog
)

# ----------------------------------------
# APPLICATION
# ----------------------------------------

add_subdirectory(app)
