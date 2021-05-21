//
// Created by Shahak Nir on 04/05/2021.
//

#include "Virologist.hpp"

using namespace std;

namespace pandemic{

    Virologist::Virologist(Board board, City city):Player(board, city){}

    // Returns Player's Role in the Game - has no use in Player
    string Virologist::role(){
        string virole;
        virole = "The Virologist can treat disease "
                  "by only throwing the city's card";
        return virole;
    }

    // Can Cure Disease with only throwing the city's card
    Player& Virologist::treat(City city){

    }
}