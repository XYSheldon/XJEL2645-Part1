#include <iostream>
#include "Footballer.h"
#include "Gameplayer.h"
int main()
{
  // create a specific footballer
  Footballer player("Wayne", "Rooney", {24, Month::Oct, 1985}, {5, 5.0}, {10, 10.55},
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
  // hat trick
  player.hat_trick();
  std::cout << "Hat Trick, now scored " << player.get_goals() << " goals in "
            << player.get_apps() << " appearances.\n";
  // price
  player.set_price(510.29);
  std::cout << "Price is $" << player.get_price() << "\n";

  player.release_on_a_free();

  //Height and Weight
  player.set_height({500, 59.2});
  player.set_weight({1295, 15.29});
  std::cout << "Height is " << player.get_height() << "\n";
  std::cout << "Weight is " << player.get_weight() << "\n";


  Gameplayer gplayer("55", "Kai", {21, Month::Jan, 1999}, {5, 5.0}, {10, 10.55}, 
                      0,29,17,1);
  // bring out some details using the accessors
  std::cout << "My favourite gameplayer is " << gplayer.get_forename() << " "
            << gplayer.get_surname() << ".\n";
  std::cout << "He currently killed " << gplayer.get_kill() << ".\n";
  std::cout << "He has made damage for " << gplayer.get_damage() << " with the rank "
            << gplayer.get_rank() << ".\n";
  gplayer.cheated();

  return 0; 
}