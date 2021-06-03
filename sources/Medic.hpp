/*
 *  Created by Shahak Nir on 04/05/2021.
 */


#pragma once

#include "Player.hpp"

using namespace std;

namespace pandemic{

    class Medic : public Player{

    public:

        Medic(Board b, City c);

        // Returns Player's Role in the Game - has no use in Player
        static string role();

        // When treating - get disease level to 0
        Medic& treat(City city) override;

        // If cure was discovered - get disease level to 0
        // to each city he is in
        Medic& drive(City city) override;
        Medic& fly_direct(City city) override;
        Medic& fly_charter(City city) override;
        Medic& fly_shuttle(City city) override;


    };

}

