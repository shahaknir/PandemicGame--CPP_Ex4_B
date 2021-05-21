//
// Created by Shahak Nir on 04/05/2021.
//

#include "Researcher.hpp"

using namespace std;

namespace pandemic{

    Researcher::Researcher(Board board, City city):Player(board, city){}

    // Returns Player's Role in the Game - has no use in Player
    string Researcher::role(){
        string researcher_role;
        researcher_role = "The Researcher can find cure to disease "
                      "even if there isn't a research station in the city "
                      "he is in";
        return researcher_role;
    }

    // Can find cure without having a research station
    void Researcher::discover_cure(Color color){
        Board& _b = this->board;
        City c = this->currCity;
        Color clr = _b.citiesMapBoard.at(c).cityColor;

        if(!_b.diseaseEradicate[clr]){
            _b.diseaseEradicate[clr] = true;
        }
    }

}