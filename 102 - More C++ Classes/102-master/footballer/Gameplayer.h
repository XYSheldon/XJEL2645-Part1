#ifndef GAMEPLAYER_H
#define GAMEPLAYER_H

#include <string>
#include <iostream>
#include "Person.h"

class Gameplayer : public Person
{
public:
    // constructors
    Gameplayer();
    Gameplayer(std::string forename, std::string surname, Date dob, Height height, Weight weight,
               int cheated, int kill, float damage, int rank);

    //mutators
    void set_cheated(int cheated);
    void inc_kill();
    void inc_damage(float damage);
    void set_rank(int rank);

    //accessors
    int get_cheated();
    int get_kill();
    float get_damage();
    int get_rank();

    //member methods
    void cheated();
    void ban();

private:
    int _cheated;
    int _kill;
    float _damage;
    int _rank;
};
#endif