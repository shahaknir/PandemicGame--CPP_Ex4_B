#include <iostream>
#include <stdexcept>
#include "Player.hpp"
using namespace std;

namespace pandemic{
    
    class GeneSplicer : public Player{

        public:
            GeneSplicer();
            GeneSplicer(Board b, City c);

            // Player's actions
            void take_card(City c);
            void bulid();

            // Player's movement
            void drive(const City& c);
            void fly_direct(const City& c);
            void fly_charter(const City& c);
            void fly_shuttle(const City& c);

            // Player's skills
            int treat(const City& c);
            void discover_cure(const Color& col);


    };

}