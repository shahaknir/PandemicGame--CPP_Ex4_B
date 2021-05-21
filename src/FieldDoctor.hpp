/*
 * Created by Shahak Nir on 04/05/2021.
 */


#ifndef PANDEMIC_FIELDDOCTOR_HPP
#define PANDEMIC_FIELDDOCTOR_HPP

#include "Player.hpp"

using namespace std;

namespace pandemic{
    
    class FieldDoctor : virtual public Player{

        public:
            Board board;
            City currCity;
            vector<City> cards;

            FieldDoctor(Board& b, City c);

            // Returns Player's Role in the Game - has no use in Player
            string role();

            //FieldDoctor Ability to Treat Neighbor Cities
            Player& treat(City city);




    };

}

#endif //PANDEMIC_FIELDDOCTOR_HPP