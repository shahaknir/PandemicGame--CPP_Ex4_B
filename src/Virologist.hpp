/*
 *  Created by Shahak Nir on 07/05/2021.
 */

#ifndef PANDEMIC_VIROLOGIST_HPP
#define PANDEMIC_VIROLOGIST_HPP

#include "Player.hpp"

using namespace std;

namespace pandemic{

    class Virologist : public Player{

    public:

        Virologist(Board b, City c);

        // Returns Player's Role in the Game - has no use in Player
        string role();

        // Can Cure Disease with only throwing the city's card
        Player& treat(City city);
    };

}

#endif //PANDEMIC_VIROLOGIST_HPP