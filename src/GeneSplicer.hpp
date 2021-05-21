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

    };

}

#endif //PANDEMIC_GENESPLICER_HPP