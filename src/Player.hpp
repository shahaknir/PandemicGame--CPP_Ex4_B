/*
 *  Created by Shahak Nir on 04/05/2021.
 */


#ifndef PANDEMIC_PLAYER_HPP
#define PANDEMIC_PLAYER_HPP

#include <iostream>
#include <string>
#include <vector>

#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"


using namespace std;


namespace pandemic
{
    class Player{
    public:
        Board board;
        City currCity;
        vector<City> cards;

        // Puts Player on the city on the board
        Player(Board& board, City city);

        // Player takes a card
        Player& take_card(City city);

        // Player throws card
        Player& throws_card(City city);



        virtual void discover_cure(Color color);

        // Player's movement
        virtual Player& drive(City city);
        virtual Player& fly_direct(City city);
        virtual Player& fly_charter(City city);
        virtual Player& fly_shuttle(City city);
        virtual Player& build();

        virtual Player& treat(City city);

        City& getCurrCity();
    };


}

#endif //PANDEMIC_PLAYER_HPP
