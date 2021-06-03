/*
 *  Created by Shahak Nir on 07/05/2021.
 */

#pragma once

#include <iostream>
#include <stdexcept>

#include "Player.hpp"

using namespace std;

namespace pandemic{
    
    class Scientist : public Player{

        public:
            int n;
            Scientist(Board board, City city, int num);
            // Returns Player's Role in the Game - has no use in Player
            static string role();
            // Can discover cure with only n cards as given in the constructor
            Scientist& discover_cure(Color color);

    };

}
