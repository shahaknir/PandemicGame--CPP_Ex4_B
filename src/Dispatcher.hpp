/*
 *  Created by shahak on 07/05/2021.
 */

#ifndef PANDEMIC_DISPATCHER_HPP
#define PANDEMIC_DISPATCHER_HPP

#include "Player.hpp"

using namespace std;

namespace pandemic{
    
    class Dispatcher : 
        public Player{

        public:
            Dispatcher(Board b, City c);

    };

}


#endif //PANDEMIC_DISPATCHER_HPP