#ifndef FOOTBALLER_H
#define FOOTBALLER_H

#include <iostream>
#include <string>
#include "Person.h"

enum class Position { Goalkeeper, Defender, Midfielder, Forward };

class Footballer : public Person {
 public:
  // constructors
  Footballer();
  Footballer(std::string forename, std::string surname, Date dob,
             Position position, std::string club, int apps, int goals);
  // mutators
  void set_club(std::string club);
  void set_position(Position position);
  void set_goals(int goals);
  void set_apps(int apps);
  // accessors
  std::string get_club();
  std::string get_position();
  int get_goals();
  int get_apps();
  // member methods
  void scored();
  void played_game();

  // member variables
 private:
  Position _position;
  std::string _club;
  int _apps;
  int _goals;
};
#endif