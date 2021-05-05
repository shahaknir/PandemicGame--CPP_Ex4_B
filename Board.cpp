// #pragma once
#include <iostream>
#include <stdexcept>
#include <string>
#include <fstream>
#include <sstream>
#include <unordered_map>

#include "Board.hpp"

using namespace std;

namespace pandemic{

    // Constructors
    Board::Board(){

    }


    // [] Operator reading and writing
    int & Board::operator[](City city){
        try{
            return cubes.at(city);        
        }catch(const std::out_of_range){
            cout << "city not in map"<< endl;
            cubes[city] = 0;
            return cubes.at(city);
        }
    }



    // Ostream Operator
    ostream& operator<<(ostream& os, const Board b){
        return os;
    }

    // Boolean is the board clean of pandemics
    bool Board::is_clean(){
        return true;
    }

    void Board::remove_cures(){

    }





    
}