#include <iostream>
#include <stdexcept>
#include <string>
#include <fstream>
#include <sstream>
#include <unordered_map>

#include "Color.hpp"

using namespace std;
class node;

namespace pandemic {
    class City{
        public:
            
        
        private:
            string name;
            unsigned int population;
            Color disease_type;
            unordered_map<int, string> neighbors;

            


    };

    class node{
        public:

        private:
            string name;
            Color color;
            unsigned int disease_cubes;
            bool research_sta;


    };
}