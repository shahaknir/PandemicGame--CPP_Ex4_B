//
// Created by Shahak Nir on 04/05/2021.
//


#include "Player.hpp"

using namespace std;

namespace pandemic{

    // Puts Player on the city on the board
    Player::Player(Board& board, City city) {
        this->currCity = city;
        this->board = board;
    }

    // Player takes a card
    Player& Player::take_card(City city) {
        this->cards.push_back(city);
        return *this;
    }

    // Player throws card
    Player& Player::throws_card(City city){
        int index = 0;
        for(auto card: this->cards){
            index++;
            if(card == city){
                cards.erase(cards.begin()+index);
                break;
            }
        }
        return *this;
    }


    // Discover a Cure, Need to be in a City with Research Station
    void Player::discover_cure(Color color){
        City _c = this->currCity;
        Board _b = this->board;
        int index = 0;
        int required_num = 5;
        if(!_b.diseaseEradicate[color]){
            if(_b.citiesMapBoard.at(_c).RStationFlag){
                for(auto card: this->cards){
                    index++;
                    if(_b.citiesMapBoard.at(card).cityColor == color){
                        required_num--;
                    }
                }
                if(required_num == 0){
                    for(auto card: this->cards){
                        index++;
                        if(_b.citiesMapBoard.at(card).cityColor == color){
                            cards.erase(cards.begin()+index);
                        }
                    }
                }
            }
        }

    }

    // Player's movement
    // Moving to a neighbor city
    Player& Player::drive(City city) {
        Board _b = this->board;
        City _c = this->currCity;
        if(_b.citiesMapBoard.at(_c).neighbors.at(_c)){
            this->currCity = city;
        }
        return *this;
    }

    // Throw the card of the city we want to go to
    Player& Player::fly_direct(City city){
        if(cards.at(city)){
            this->currCity = city;
            this->throws_card(city);
        }
        return *this;
    }

    // Throw the card of the city we are in
    Player& Player::fly_charter(City city){
        City _c = this->currCity;
        if(cards.at(_c)){
            this->currCity = city;
            this->throws_card(_c);
        }
        return *this;
    }

    // If current city and destination has research
    // station - fly straight there
    Player& Player::fly_shuttle(City city){
        Board _b = this->board;
        City _c = this->currCity;
        if(_b.citiesMapBoard.at(_c).RStationFlag){
            if(_b.citiesMapBoard.at(city).RStationFlag){
                this->currCity = city;
            }
        }
        return *this;
    }

    Player& Player::build(){
        Board _b = this->board;
        City _c = this->currCity;
        if(!_b.citiesMapBoard.at(_c).RStationFlag){
            if(this->cards.at(_c)){
                throws_card(_c);
                _b.citiesMapBoard.at(_c).RStationFlag = true;
            }
        }
        return *this;
    }

    Player& Player::treat(City city){
        Board& _b = this->board;
        Color clr = _b.citiesMapBoard.at(city).cityColor;
        if(_b.citiesMapBoard.at(city).diseaseLv != 0){
            if(!_b.diseaseEradicate[clr]){
                _b.citiesMapBoard.at(city).diseaseLv--;
            }else{
                _b.citiesMapBoard.at(city).diseaseLv = 0;
            }
        }else{
            throw "The Infection Level is: 0\n Therefore This Act Can't be Done\n";
        }
        return *this;
    }

    City& Player::getCurrCity(){
        return this->currCity;
    }
}





