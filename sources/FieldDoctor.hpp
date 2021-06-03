/*
 * Created by Shahak Nir on 04/05/2021.
 */


#pragma once

#include "Player.hpp"

using namespace std;

namespace pandemic{
    
    class FieldDoctor : virtual public Player{

        public:

            FieldDoctor(Board& b, City c);

            // Returns Player's Role in the Game - has no use in Player
            static string role();

            //FieldDoctor Ability to Treat Neighbor Cities
            FieldDoctor& treat(City city) override;

    };

}
