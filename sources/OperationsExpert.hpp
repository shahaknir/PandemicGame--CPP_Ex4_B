/*
 *  Created by Shahak Nir on 04/05/2021.
 */

#pragma once

#include "Player.hpp"

using namespace std;

namespace pandemic{

    class OperationsExpert : public Player{

    public:


        OperationsExpert(Board _board, City _c);
        // Returns Player's Role in the Game - has no use in Player
        static string role();

        // can build a Research Station in any city he is currently in without throwing any card
        OperationsExpert& build() override;

    };

}
