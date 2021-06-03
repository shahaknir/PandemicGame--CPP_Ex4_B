/*
 *  Created by Shahak Nir on 04/05/2021.
 */

#pragma once

#include "Player.hpp"

using namespace std;

namespace pandemic{

    class Researcher : public Player{

    public:

        Researcher(Board b, City c);

        // Returns Player's Role in the Game - has no use in Player
        static string role();

        // Can find cure without having a research station
        Researcher& discover_cure(Color color) override;

    };

}

