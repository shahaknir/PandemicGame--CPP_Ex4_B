/*
 *  Created by Shahak Nir on 04/05/2021.
 */


#ifndef PANDEMIC_MEDIC_HPP
#define PANDEMIC_MEDIC_HPP

#include "Player.hpp"

using namespace std;

namespace pandemic{

    class Medic : public Player{

    public:

        Medic(Board b, City c);

        // Returns Player's Role in the Game - has no use in Player
        string role();

        // When treating - get disease level to 0
        Player& treat(City city);

        // If cure was discovered - get disease level to 0
        // to each city he is in
        Player& drive(City city);
        Player& fly_direct(City city);
        Player& fly_charter(City city);
        Player& fly_shuttle(City city);


    };

}

#endif //PANDEMIC_MEDIC_HPP