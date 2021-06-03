/*
 * Created by Shahak Nir on 04/05/2021.
 */

#pragma once

#include <iostream>
#include <stdexcept>
#include "Player.hpp"
using namespace std;

namespace pandemic{
    
    class GeneSplicer : public Player{

        public:

            GeneSplicer(Board b, City c);

            // Returns Player's Role in the Game - has no use in Player
            static string role();

            // Can find cure with any 5 cards
            GeneSplicer& discover_cure(Color color) override;

    };

}

