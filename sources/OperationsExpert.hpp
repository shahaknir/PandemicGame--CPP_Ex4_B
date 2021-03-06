//
// Created by shahak on 12/06/2021.
//

#ifndef EX4_PA_OPERATIONSEXPERT_HPP
#define EX4_PA_OPERATIONSEXPERT_HPP


#pragma once

#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

namespace pandemic
{
    class OperationsExpert: public Player
    {
    public:
        OperationsExpert(Board b, City c);

        // Returns Player's Role in the Game - has no use in Player
        string role() override;

        // can build a Research Station in any city he is currently in without throwing any card
        OperationsExpert& build() override;

    };

}


#endif //EX4_PA_OPERATIONSEXPERT_HPP
