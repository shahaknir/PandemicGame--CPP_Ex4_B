#pragma once

#include <iostream>
#include <stdexcept>
#include <string>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <map>

#include "City.hpp"
#include "Color.hpp"

using namespace std;

namespace pandemic{
    class Board{
            map<City, int> cubes; 
        public:

            // Constructors
            Board();

            // [] Operator reading and writing
            int & operator[](City city);

            // Ostream Operator
            friend ostream& operator<<(ostream& os, const Board b);

            // Boolean is the board clean of pandemics
            bool is_clean();

            void remove_cures();
    };



    
}