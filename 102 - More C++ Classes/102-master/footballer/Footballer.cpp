#include "Footballer.h"

// constructors (default)
Footballer::Footballer()
    : Person{"A", "Player", {1, Month::Jan, 1900}},
      _position{Position::Goalkeeper},
      _club{"Free Agent"},
      _apps{0},
      _goals{0} {}
// constructor (user-specified)
Footballer::Footballer(std::string forename, std::string surname, Date dob,
                       Position position, std::string club, int apps, int goals)
    : Person{forename, surname, dob},
      _position{position},
      _club{club},
      _apps{apps},
      _goals{goals} {}

// mutators
void Footballer::set_club(std::string club) { _club = club; }
void Footballer::set_position(Position position) { _position = position; }
void Footballer::set_goals(int goals) { _goals = goals; }
void Footballer::set_apps(int apps) { _apps = apps; }
// accessors
std::string Footballer::get_club() { return _club; }
int Footballer::get_goals() { return _goals; }
int Footballer::get_apps() { return _apps; }
std::string Footballer::get_position() {
  if (_position == Position::Goalkeeper) {
    return "Goalkeeper";
  } else if (_position == Position::Defender) {
    return "Defender";
  } else if (_position == Position::Midfielder) {
    return "Midfielder";
  } else {
    return "Forward";
  }
}
// methods
void Footballer::scored() {
  _goals++;
  std::cout << "GOALLLLL!!!!!!!\n";
}
void Footballer::played_game() {
  _apps++;
  std::cout << "Played a game.\n";
}

// get them to add a hat trick method