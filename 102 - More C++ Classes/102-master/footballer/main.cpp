#include <iostream>
#include "Footballer.h"

int main() {
  // create a specific footballer
  Footballer player("Wayne", "Rooney", {24, Month::Oct, 1985},
                    Position::Forward, "Washington DC", 119, 53);
  // bring out some details using the accessors
  std::cout << "My favourite footballer is " << player.get_forename() << " "
            << player.get_surname() << ".\n";
  std::cout << "He currently plays for " << player.get_club() << ".\n";
  std::cout << "He has scored " << player.get_goals() << " goals in "
            << player.get_apps() << " appearances.\n";
  // use some of the class methods to change the data
  player.played_game();
  player.scored();
  // print out the updated data
  std::cout << "He has now scored " << player.get_goals() << " goals in "
            << player.get_apps() << " appearances.\n";

  return 0;
}