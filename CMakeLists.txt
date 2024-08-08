cmake_minimum_required(VERSION 3.5.0)
project(AlgorithmsDataStructures VERSION 0.1.0 LANGUAGES C CXX)

set(SOURCES
    main.cpp
    bubblesort/bubblesort.cpp
    binarysearch/binarysearch.cpp
)

add_executable(AlgorithmsDataStructures ${SOURCES})

