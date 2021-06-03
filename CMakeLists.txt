cmake_minimum_required(VERSION 3.19)
project(pandemic_b)

set(CMAKE_CXX_STANDARD 14)

add_executable(pandemic_b

        sources/Board.cpp
        sources/Board.hpp
        sources/City.hpp
        sources/Dispatcher.cpp
        sources/Dispatcher.hpp
        sources/Player.cpp
        sources/Player.hpp
        sources/FieldDoctor.cpp
        sources/FieldDoctor.hpp
        sources/GeneSplicer.cpp
        sources/GeneSplicer.hpp
        sources/Medic.cpp
        sources/Medic.hpp
        sources/OperationsExpert.cpp
        sources/OperationsExpert.hpp
        sources/Researcher.cpp
        sources/Researcher.hpp
        sources/Scientist.cpp
        sources/Scientist.hpp
        sources/Virologist.cpp
        sources/Virologist.hpp
        sources/Color.hpp
        Test.cpp
        Demo1.cpp
        #        Demo2.cpp
        TestRunner.cpp
        TestCounter.cpp
        pandemic.cpp
        doctest.h
        )