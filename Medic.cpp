#include <iostream>
#include <stdexcept>
#include "Player.hpp"
using namespace std;

namespace pandemic{
    
    class Medic : public Player{

        public:
            Medic(){
                
            }
            
            Medic(Board b, City c){
                
            }

            // Player's actions
            void take_card(City c){
                
            }

            void bulid(){
                
            }

            // Player's movement
            void drive(const City& c){
                
            }

            void fly_direct(const City& c){
                
            }

            void fly_charter(const City& c){
                
            }

            void fly_shuttle(const City& c){
                
            }

            // Player's skills
            int treat(const City& c){
                return 0;
            }

            void discover_cure(const Color& col){
                
            }


    };

}