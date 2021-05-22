/*
 * Created by Shahak Nir on 04/05/2021.
 */

#ifndef PANDEMIC_GENESPLICER_HPP
#define PANDEMIC_GENESPLICER_HPP

#include <iostream>
#include <stdexcept>
#include "Player.hpp"
using namespace std;

namespace pandemic{
    
    class GeneSplicer : public Player{

        public:

            GeneSplicer(Board b, City c);

            // Returns Player's Role in the Game - has no use in Player
            string role();

            // Can find cure with any 5 cards
            void discover_cure(Color color) override;

    };

}

#endif //PANDEMIC_GENESPLICER_HPP