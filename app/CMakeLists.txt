cmake_minimum_required(VERSION 3.5)
project(engineApp)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# ----------------------------------------
# SOURCES
# ----------------------------------------

set(ENGINE_APP_SOURCES
  EngineApp.cpp
)

# ----------------------------------------
# EXECUTABLE
# ----------------------------------------
add_executable(${PROJECT_NAME} ${ENGINE_APP_SOURCES})


# ----------------------------------------
# EXECUTABLE
# ----------------------------------------
target_link_libraries(${PROJECT_NAME} PUBLIC
  engine
)

target_include_directories(${PROJECT_NAME} PUBLIC
  ${CMAKE_SOURCE_DIR}/engine
)
