/*
 *  Created by Shahak Nir on 04/05/2021.
 */


#ifndef PANDEMIC_OPERATIONSEXPERT_HPP
#define PANDEMIC_OPERATIONSEXPERT_HPP

#include "Player.hpp"

using namespace std;

namespace pandemic{

    class OperationsExpert : public Player{

    public:

        Board board;
        City currCity;
        vector<City> cards;

        OperationsExpert(Board _board, City _c);
        // Returns Player's Role in the Game - has no use in Player
        string role();

        // can build a Research Station in any city he is currently in without throwing any card
        Player& build();

    };

}

#endif //PANDEMIC_OPERATIONSEXPERT_HPP