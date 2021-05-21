//
// Created by Shahak Nir on 07/05/2021.
//

#include <stdexcept>
#include <string>
#include <map>


#include "Board.hpp"

using namespace std;

namespace pandemic{

    // Constructor
    Board::Board(){
        setCitiesOnBoard();
        for (int i=0;i<4;i++){
            this->diseaseEradicate[i] = false;
        }
        playersLocOnBoard.clear();
    }


    void Board::setCitiesOnBoard(){
        ifstream file("../cities_map.txt");
        string row, word, cityStr, colorStr, neighbor;

        while (std::getline(file, row)) {
            istringstream iss(row);

            cityNode cityInfo;
            iss >> cityStr;

            iss >> colorStr;
            cityInfo.cityColor = colorEnumMap.at(colorStr);
            while(iss >> word) {
                iss >> neighbor;
                cityInfo.neighbors.push_back(cityEnumMap.at(neighbor));
            }
            cityInfo.diseaseLv = 0;
            this->citiesMapBoard[cityEnumMap.at(cityStr)] = cityInfo;
        }
    }

    // Boolean is the board clean of pandemics
    bool Board::is_clean(){
        for (int i=0;i<4;i++) {
            if(diseaseEradicate[i])
                return false;
        }
        if(!playersLocOnBoard.empty())
            return false;
        return true;
    }

    // Removes cures that were found
    void Board::remove_cures(){
        for(int i=0; i<4; i++) {
            if (diseaseEradicate[i]) {
                diseaseEradicate[i] = false;
            }
        }
    }

    // [] Operator reading and writing
    int & Board::operator[](City city){
        try{
            return this -> citiesMapBoard.at(city).diseaseLv;
        }catch(const std::out_of_range){
            citiesMapBoard[city].diseaseLv = 0;
            return citiesMapBoard.at(city).diseaseLv;
        }
    }

    // Ostream Operator
    ostream& operator<<(ostream& os, const Board b){
        return os;
    }
}