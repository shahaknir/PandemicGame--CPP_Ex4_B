//
// Created by shahak on 12/06/2021.
//

#include "Player.hpp"

using namespace std;

namespace pandemic
{


    Player::Player(Board board, City city) {

    }

    vector<City> Player::getCards() {
        return vector<City>();
    }

    City Player::getCity() {
        return Mumbai;
    }

    Player &Player::take_card(City city) {
        return *this;
    }

    string Player::role() {
        return string();
    }

    void Player::discover_cure(Color color) {

    }

    Player &Player::drive(City city) {
        return *this;
    }

    Player &Player::fly_direct(City city) {
        if(!cards[city]){
            return *this;
        }
        this->throwCard(city);
        this->currCity = city;
        return *this;
    }

    Player &Player::fly_charter(City city) {
        return *this;
    }

    Player &Player::fly_shuttle(City city) {
        return *this;
    }

    Player &Player::build() {
        return *this;
    }

    Player &Player::treat(City city) {
        return *this;
    }

    void Player::throwCard(City city) {
        int index = 0;
        for(auto itr : cards){
            if(itr.first != city){
                index++;
            }else{
                break;
            }
        }
        cards[city] = off;
    }
}