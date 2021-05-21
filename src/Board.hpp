/*
 * Created by Shahak Nir on 04/05/2021.
 */

#ifndef PANDEMIC_BOARD_HPP
#define PANDEMIC_BOARD_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <map>
#include <vector>

#include "Player.hpp"
#include "City.hpp"
#include "Color.hpp"



using namespace std;

typedef struct{
    City city;
    Color cityColor;
    int diseaseLv;
    vector<City> neighbors;
    bool RStationFlag;
}cityNode;


typedef map<City, cityNode> citiesMap;
typedef map <Player, City> playersLoc;


namespace pandemic{

    class Board
    {
    public:
        citiesMap citiesMapBoard;
        void setCitiesOnBoard();
        bool diseaseEradicate[NUMDISEASES];
        playersLoc playersLocOnBoard;



            // Constructor
            Board();

            // Boolean is the board clean of pandemics
            bool is_clean();

            // Removes cures that were found
            void remove_cures();

            // [] Operator reading and writing
            int & operator[](City city);

            // Ostream Operator
            friend ostream& operator<<(ostream& os, const Board b);

    };

}


#endif //PANDEMIC_BOARD_HPP