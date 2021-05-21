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

    };

}

#endif //PANDEMIC_MEDIC_HPP