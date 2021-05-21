//
// Created by Shahak Nir on 04/05/2021.
//

#include "Medic.hpp"

using namespace std;

namespace pandemic{

    Medic::Medic(Board board, City city):Player(board, city){}

    // Returns Player's Role in the Game - has no use in Player
    string Medic::role(){
        string medic_role;
        medic_role = "The Medic, When treating - get disease level to 0 "
                      "If a cure was found - ever without actively"
                      "choosing to treat get disease level to 0 in his "
                      "current city";
        return medic_role;
    }

    // When treating - get disease level to 0
    Player& Medic::treat(City city){
        Board& _b = this->board;

        if(_b.citiesMapBoard.at(city).diseaseLv != 0){
            _b.citiesMapBoard.at(city).diseaseLv = 0;
        }else{
            throw "The Infection Level is: 0\n Therefore This Act Can't be Done\n";
        }
    }

    // If cure was discovered - get disease level to 0
    // to each city he is in

    // Moving to a neighbor city
    Player& Medic::drive(City city){
        Board& _b = this->board;
        City _c = this->currCity;
        Color clr = _b.citiesMapBoard.at(_c).cityColor;
        if(_b.citiesMapBoard.at(_c).neighbors.at(city)){
            this->currCity = city;
        }
        if(_b.diseaseEradicate[clr]){
            _b.citiesMapBoard.at(_c).diseaseLv = 0;
        }
    }

    // Throw the card of the city we want to go to
    Player& Medic::fly_direct(City city){
        Board& _b = this->board;
        City _c = this->currCity;
        Color clr = _b.citiesMapBoard.at(_c).cityColor;

        int index = 0;
        for(auto card: this->cards){
            index++;
            if(card == city){
                cards.erase(cards.begin()+index);
                break;
            }
        }
        if(_b.diseaseEradicate[clr]){
            _b.citiesMapBoard.at(_c).diseaseLv = 0;
        }
    }

    // Throw the card of the city we are in
    Player& Medic::fly_charter(City city){
        Board& _b = this->board;
        City _c = this->currCity;
        Color clr = _b.citiesMapBoard.at(_c).cityColor;

        if(cards.at(_c)){
            this->currCity = city;
            int index = 0;
            for(auto card: this->cards){
                index++;
                if(card == _c){
                    cards.erase(cards.begin()+index);
                    break;
                }
            }
        }
        if(_b.diseaseEradicate[clr]){
            _b.citiesMapBoard.at(_c).diseaseLv = 0;
        }
    }

    // If current city and destination has research
    // station - fly straight there
    Player& Medic::fly_shuttle(City city){
        Board _b = this->board;
        City _c = this->currCity;
        Color clr = _b.citiesMapBoard.at(_c).cityColor;

        if(_b.citiesMapBoard.at(_c).RStationFlag){
            if(_b.citiesMapBoard.at(city).RStationFlag){
                this->currCity = city;
            }
        }
        if(_b.diseaseEradicate[clr]){
            _b.citiesMapBoard.at(_c).diseaseLv = 0;
        }
    }

}