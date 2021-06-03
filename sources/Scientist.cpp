//
// Created by Shahak Nir on 04/05/2021.
//

#include "Scientist.hpp"

namespace pandemic
{

    Scientist::Scientist(Board board, City city, int num):Player(board, city), n(num){}

    // Returns Player's Role in the Game - has no use in Player
    string Scientist::role(){
        string scirole;
        scirole = "The Scientist can discover cure "
                  "by only giving n cards of the same"
                  "color";
        return scirole;
    }

    // Can discover cure with only n cards as given in the constructor
    Scientist& Scientist::discover_cure(Color color){
        int required_num = this->n;
        int index = 0;
        Board _b = this->board;

        for(auto card: this->cards){
            if(_b.citiesMapBoard.at(card).cityColor == color){
                required_num--;
            }
        }
        if(required_num == 0){
            _b.diseaseEradicate[color] = true;
            for(auto card: this->cards){
                index++;
                if(_b.citiesMapBoard.at(card).cityColor == color){
                    cards.erase(cards.begin()+index);
                }
            }
        }
    }

}