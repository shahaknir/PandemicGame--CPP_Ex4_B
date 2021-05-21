//
// Created by Shahak Nir on 05/05/2021.
//


using namespace std;

#include "doctest.h"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

using namespace pandemic;

Board my_board;

Player playersList[8]={
    Dispatcher(my_board , City::NewYork),
    FieldDoctor(my_board , City::Washington),
    GeneSplicer(my_board , City::HongKong),
    Medic(my_board , City::Manila),
    OperationsExpert(my_board , City::Montreal),
    Researcher(my_board , City::Riyadh),
    Scientist(my_board , City::SanFrancisco, 1),
    Virologist(my_board , City::Tokyo)
};

//  Player Specific Ability Checks
TEST_CASE("Test Dispatcher Ability to Fly Direct When in City with"
  "Research Station:"){
    // OperationsExpert Build a Research Station in Montreal
    playersList[4].build();
    City OEcity = playersList[4].getCurrCity();


    // Dispatcher
    playersList[0].drive(OEcity);
    playersList[0].take_card(City::LosAngeles)
        .take_card(City::Madrid)
        .take_card(City::Mumbai)
        .take_card(City::Kolkata)
        .take_card(City::Istanbul);
    playersList[0].fly_direct(City::Johannesburg);
    CHECK_EQ(playersList[0].getCurrCity(), City::Johannesburg);
}

TEST_CASE("Test FieldDoctor Ability to Treat Neighbor Cities:"){

    my_board[City::Atlanta] = 1;
    my_board[City::NewYork] = 1;
    my_board[City::Montreal] = 1;
    my_board[City::Miami] = 1;
    my_board[City::Baghdad] = 1;
    my_board[City::Lima] = 1;
    my_board[City::Essen] = 1;

    playersList[1].treat(City::Atlanta);
    CHECK(my_board[City::Atlanta] == 0);
    playersList[1].treat(City::NewYork);
    CHECK(my_board[City::NewYork] == 0);
    playersList[1].treat(City::Montreal);
    CHECK(my_board[City::Montreal] == 0);
    playersList[1].treat(City::Miami);
    CHECK(my_board[City::Miami] == 0);

    CHECK_THROWS(playersList[1].treat(City::Baghdad));
    CHECK_THROWS(playersList[1].treat(City::Lima));
    CHECK_THROWS(playersList[1].treat(City::Essen));

}

TEST_CASE("Test GeneSplicer Ability to Find Cure with ANY 5 Cards:"){
    playersList[2].take_card(City::Algiers) // Black
        .take_card(City::Atlanta) // Blue
        .take_card(City::Bangkok) // Red
        .take_card(City::Bogota) //Yellow
        .take_card(City::Chennai); // Black

    CHECK_NOTHROW(playersList[2].discover_cure(Color::Red));
    // illegal
    CHECK_THROWS(playersList[2].discover_cure(Color::Yellow));

    // Clear Cures Found
    my_board.remove_cures();
}

TEST_CASE("Test Medic Ability to remove all cubes of the Disease "
  "from Board if Cure Found Automatically:"){

// Red Cards
playersList[3].take_card(Manila)
    .take_card(Jakarta)
    .take_card(HongKong)
    .take_card(Bangkok)
    .take_card(Beijing);

    CHECK_NOTHROW(playersList[3].discover_cure(Red));
    CHECK_NOTHROW(playersList[3].drive(Taipei));
    CHECK_FALSE(my_board.citiesMapBoard.at(Taipei).diseaseLv != 0);

    // Clear Cures Found
    my_board.remove_cures();
}

TEST_CASE("Test OperationsExpert Ability to Build a Research Stations "
          "without losing a card:"){

    playersList[4].build();
    CHECK_EQ(my_board.citiesMapBoard.at(City::Atlanta).RStationFlag, true);
    playersList[4].take_card(City::Riyadh);
    playersList[4].fly_direct(Riyadh);
    // Black Cities
    playersList[4].take_card(City::Riyadh)
        .take_card(City::Mumbai)
        .take_card(City::Moscow)
        .take_card(City::Tehran)
        .take_card(City::Kolkata);
    playersList[4].build();
    // If the Research Station was Build - will check's out
    CHECK_FALSE(!my_board.citiesMapBoard.at(City::Riyadh).RStationFlag);

    CHECK(playersList[4].cards.at(City::Riyadh));

    // Clear Cures Found
    my_board.remove_cures();
}

TEST_CASE("Test Researcher Ability to Discover a Cure in ANY city"
  "even Without Research Station:"){
    playersList[5].take_card(City::Osaka)
        .take_card(City::Riyadh)
        .take_card(City::Paris)
        .take_card(City::HoChiMinhCity)
        .take_card(City::Chennai);
    CHECK_NOTHROW(playersList[5].fly_charter(City::Osaka));
    CHECK_FALSE(my_board.citiesMapBoard.at(City::Osaka).RStationFlag);
    CHECK_NOTHROW(playersList[5].discover_cure(Color::Red));

    // Clear Cures Found
    my_board.remove_cures();
}

TEST_CASE("Test Scientist Ability to Discover Cures by "
  "Throwing 1 card:"){

    playersList[6].take_card(City::Seoul) // Red
        .take_card(City::Washington) // Blue
        .take_card(City::Mumbai) // Black
        .take_card(City::SaoPaulo) // Yellow
        .take_card(City::Taipei); // Red

    CHECK_NOTHROW(playersList[6].discover_cure(Color::Red));
    CHECK_NOTHROW(playersList[6].discover_cure(Color::Blue));
    CHECK_NOTHROW(playersList[6].discover_cure(Color::Black));
    CHECK_NOTHROW(playersList[6].discover_cure(Color::Yellow));

    // NOTHROW FOR SURE!!!
    CHECK_NOTHROW(playersList[6].discover_cure(Color::Red));

    // Clear Cures Found
    my_board.remove_cures();
}

TEST_CASE("Test Virologist Ability to Treat any City in the World "
  "With Throwing the City's Card:"){

    playersList[7].take_card(City::Tehran)
        .take_card(City::Washington)
        .take_card(City::Sydney)
        .take_card(City::BuenosAires)
        .take_card(City::Bogota);
    CHECK_NOTHROW(playersList[7].treat(City::Tehran));
    CHECK_NOTHROW(playersList[7].treat(City::Washington));
    CHECK_NOTHROW(playersList[7].treat(City::Sydney));
    CHECK_NOTHROW(playersList[7].treat(City::BuenosAires));
    CHECK_NOTHROW(playersList[7].treat(City::Bogota));

    CHECK_THROWS(playersList[7].treat(City::LosAngeles));
    CHECK_THROWS(playersList[7].treat(City::Cairo));
}
//
//TEST_CASE("check operations not throw "){
//    for(Player p: playersList){ // 7 test * 8 players
//        CHECK_THROWS(p.drive(City::Washington));
//        CHECK_THROWS(p.fly_direct(City::Tokyo));
//        CHECK_THROWS(p.fly_shuttle(City::Tehran));
//        CHECK_THROWS(p.fly_charter(City::Taipei));
//        CHECK_THROWS(p.build());
//        CHECK_THROWS(p.discover_cure(Color::Black));
//        CHECK_THROWS(p.treat(City::Sydney));
//    }
//
//}
//
//TEST_CASE("check transportation"){
//    for(Player p: playersList){
//        p.drive(City::Santiago);
//        CHECK(p.getCurrCity() == City::Santiago);
//        p.fly_charter(City::London);
//
//    }
//}