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
    // class Board{

    // Constractors
    Board::Board(){

    }
    // Board

    // [] Operator reading and writing
    int & Board::operator[](City city){
        try{
            return cubes.at(city);        
        }catch(const std::out_of_range){
            cout << "city not in map"<< endl;
        }
    }



    // Ostream Operator
    ostream& operator<<(ostream& os, const Board b);

    // Boolean is the board clean of pandemics
    bool is_clean();


    
    unsigned int research_station_remaining = 6;
    
    // unordered_map<string, node> city
    unordered_map<string, City> city_map;
    // };



    
}