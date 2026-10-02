cmake_minimum_required(VERSION 3.15)

project(lab2)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(
    lab2
    main.cpp
    src/DnaSequence.cpp
    src/Gene.cpp
    src/GeneticConstruction.cpp
)