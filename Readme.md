# CMake boilerplate template

This is a simple boilerplate template for a CMake project for linux based
platforms (currently).

## INCLUDED
- GoogleTest
- Google Benchmark
- Doxygen + Dot based documentations

---
## PROJECT STRUCTURE

```
-- ProjectFolder
    |   ...
    |   CmakeLists.txt                      --> Root
    |
    | -- core
    |   ...
    |   CMakeLists.txt                      --> Core
    |
    | -- doc
    |   ...
    |   CMakeLists.txt                      --> Documentation (Doxygen)
    |
    | -- lib
        | -- drivers
        |   ...
        |   CMakeLists.txt                  --> lib/drivers
        |
        | -- submodules
            | -- googletest
            | -- benchmark
        |   ...
        |   CMakeLists.txt                  --> lib/submodules
        |
        | -- (UserLibrary1)
        |   ...
        |   CMakeLists.txt                  --> lib/{userlib1}
        |
        | -- (UserLibrary2)                 --> lib/{userlib2}
        |   ...
        |   CMakeLists.txt
        |
    | -- tests                              --> Tests
    |   ...
    |   CMakeLists.txt
```
---

## Usage

Run following commnands in terminal after cloning this repo
```
cd <project_dir>
git submodule init && git submodule update
mkdir build
cmake ..
make
```
Or leave the configuration and build on VSCode with CMake Extension
