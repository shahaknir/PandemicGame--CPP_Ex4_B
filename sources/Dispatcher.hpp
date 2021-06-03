/*
 *  Created by shahak on 07/05/2021.
 */

#pragma once

#include "Player.hpp"

using namespace std;

namespace pandemic{
    
    class Dispatcher : 
        public Player{

        public:
            Dispatcher(Board b, City c);

        // Returns Player's Role in the Game - has no use in Player
        static string role();

        // Dispatcher can fly directly to where ever he wish
        // if there ia a research station in his current city
        Dispatcher& fly_direct(City city) override;
    };

}

