//
// Created by Shahak Nir on 04/05/2021.
//

#include "OperationsExpert.hpp"

using namespace std;

namespace pandemic{

    OperationsExpert::OperationsExpert(Board _board, City _c): Player(_board, _c){}

    // Returns Player's Role in the Game - has no use in Player
    string OperationsExpert::role(){
        string oerole;
        oerole = "The Operations Expert can build a Research Station "
                 "in any city he is currently in - "
                 "without throwing any card";
        return oerole;
    }

    // can build a Research Station in any city he is currently in without throwing any card"
    Player& OperationsExpert::build(){
        City city = this->currCity;
        Board& _board = this->board;
        if(!_board.citiesMapBoard.at(city).RStationFlag)
            _board.citiesMapBoard.at(city).RStationFlag = true;
    }

}