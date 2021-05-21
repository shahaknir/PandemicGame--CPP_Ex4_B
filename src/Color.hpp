/*
 *  Created by shahak on 07/05/2021.
 */


#ifndef PANDEMIC_COLOR_HPP
#define PANDEMIC_COLOR_HPP

enum Color{
    Black, 
    Blue,
    Red,
    Yellow
};

static map<string, Color> colorEnumMap {
        {"Black", Color::Black},
        {"Blue", Color::Blue},
        {"Red", Color::Red},
        { "Yellow", Color::Yellow }
};


#endif //PANDEMIC_COLOR_HPP