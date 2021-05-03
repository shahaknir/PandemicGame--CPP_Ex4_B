#include <iostream>
#include <stdexcept>
#include <string>
#include <fstream>
#include <sstream>
#include <unordered_map>

#include "City.hpp"

using namespace std;



namespace pandemic{
    class Board{
        public:

            // Constractors
            Board();
            // Board

            // [] Operator reading and writing
            Board& operator[](City& city);
            const Board& operator[](const City& city);


            // Ostream Operator
            friend ostream& operator<<(ostream& os, const Board b);

            // Boolean is the board clean of pandemics
            bool is_clean();






        private:
            
            unsigned int research_station_remaining = 6;
            
            // unordered_map<string, node> city
            unordered_map<string, City> city_map;
    };



    
}