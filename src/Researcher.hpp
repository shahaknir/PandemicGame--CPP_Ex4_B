/*
 *  Created by Shahak Nir on 04/05/2021.
 */


#ifndef PANDEMIC_RESEARCHER_HPP
#define PANDEMIC_RESEARCHER_HPP
#include "Player.hpp"

using namespace std;

namespace pandemic{

    class Researcher : public Player{

    public:

        Researcher(Board b, City c);

    };

}

#endif //PANDEMIC_RESEARCHER_HPP