//
// Created by shahak on 12/06/2021.
//

#include "Dispatcher.hpp"

using namespace std;
namespace pandemic{

    Dispatcher::Dispatcher(Board board, City city) : Player(board, city) {

    }

    // Returns Player's Role in the Game - has no use in Player
    string Dispatcher::role(){
        string dispatcherole;
        dispatcherole = "The Dispatcher can fly direct to any "
                        "destination if the city he currently in - "
                        "has a research station in it";
        return dispatcherole;
    }

    // Dispatcher can fly directly to where ever he wish
    // if there is a research station in his current city
    Dispatcher& Dispatcher::fly_direct(City city){
        if(board.get_cities_map().at(currCity).research_station){
            Player::fly_direct(city);
        }
        return *this;
    }
}