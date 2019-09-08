#include "Gameplayer.h"

// constructors
Gameplayer::Gameplayer()
    : Person{"55", "Kai", {21, Month::Jan, 1999}, {5, 5.0}, {10, 10.55}},
      _cheated{0},
      _kill{29},
      _damage{17},
      _rank{1} {}

Gameplayer::Gameplayer(std::string forename, std::string surname, Date dob, Height height, Weight weight,
                       int cheated, int kill, float damage, int rank)
    : Person(forename, surname, dob, height, weight),
      _cheated{cheated},
      _kill{kill},
      _damage{damage},
      _rank{rank} {}

//mutators
void Gameplayer::set_cheated(int cheated) { _cheated = cheated; }
void Gameplayer::set_rank(int rank) { _rank = rank; }
void Gameplayer::inc_damage(float damage) { _damage += damage; }
void Gameplayer::inc_kill() { _kill++; }

//accessors

int Gameplayer::get_cheated() { return _cheated; }
int Gameplayer::get_rank() { return _rank; }
float Gameplayer::get_damage() { return _damage; }
int Gameplayer::get_kill() { return _kill; }

//methods
void Gameplayer::ban(){
    _rank=0;
    _damage=0;
    _kill=0;
    std::cout << "Looking forward his performance on CCTV-1!";
}
void Gameplayer::cheated(){
    _cheated=1;
    Gameplayer::ban();
}