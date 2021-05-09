cmake_minimum_required(VERSION 3.19)
project(pandemic)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(pandemic
        sources/Board.cpp
        sources/Board.hpp
        sources/City.hpp
        sources/Color.hpp
        Demo1.cpp
#        Demo2.cpp
        sources/Dispatcher.cpp
        sources/Dispatcher.hpp
        sources/FieldDoctor.cpp
        sources/FieldDoctor.hpp
        sources/GeneSplicer.cpp
        sources/GeneSplicer.hpp
        sources/Medic.cpp
        sources/Medic.hpp
        sources/OperationsExpert.cpp
        sources/OperationsExpert.hpp
        sources/Player.cpp
        sources/Player.hpp
        sources/Researcher.cpp
        sources/Researcher.hpp
        sources/Scientist.cpp
        sources/Scientist.hpp
        #        TestCounter.cpp
        sources/Virologist.cpp
        sources/Virologist.hpp sources/Color.cpp sources/Color.cpp blabla.cpp blabla.h)
