# Game Engine

Based on [Cherno's Hazel game engine](https://www.youtube.com/watch?v=JxIZbV_XjAs&list=PLlrATfBNZ98dC-V-N3m0Go4deliWHPFwT) for learning

.
+--engine
  +-- include
    +--Application.h
    +--Core.h
    +--EntryPoint.h
  +-- src
    +--Application.cpp
  +--engine.h
+--app
  +--EngineApp.cpp
  +--CMakeLists.txt
+--dependencies
  +--glad
  +--glfw
  +--glog
+--CMakeLists.txt
+--README.md

## Goals
* Experiment with more modern CPP features
* Improve on CPP project structure
* Gain more experience with shaders, computer graphics, and mroe
* Learn about rendering and multi-threading for graphics
* Establish a better unit and integration testing framework

## Dependencies
* clang
* cmake
* glad
* glfw
* [glog](https://github.com/google/glog) -> added as submodule
