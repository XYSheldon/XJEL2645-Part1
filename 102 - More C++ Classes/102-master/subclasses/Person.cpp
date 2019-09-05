#include "Person.h"

// list initialisation in constructor ('default' values)
Person::Person()
    : _forename("John"), _surname("Doe"), _dob({1, Month::Jan, 1900}) {}
// alternatively, initialise class members using constructor arguments
Person::Person(std::string forename, std::string surname, Date dob)
    : _forename(forename), _surname(surname), _dob(dob) {}

// mutators
void Person::set_forename(std::string forename) { _forename = forename; }
void Person::set_surname(std::string surname) { _surname = surname; }
void Person::set_dob(Date dob) { _dob = dob; }
// accessors
std::string Person::get_forename() { return _forename; }
std::string Person::get_surname() { return _surname; }
std::string Person::get_dob() {
  std::string day = std::to_string(_dob.day);
  std::string year = std::to_string(_dob.year);

  if (_dob.month == Month::Jan) {
    return day + "/01/" + year;
  } else if (_dob.month == Month::Feb) {
    return day + "/02/" + year;
  } else if (_dob.month == Month::Mar) {
    return day + "/03/" + year;
  } else if (_dob.month == Month::Apr) {
    return day + "/04/" + year;
  } else if (_dob.month == Month::May) {
    return day + "/05/" + year;
  } else if (_dob.month == Month::Jun) {
    return day + "/06/" + year;
  } else if (_dob.month == Month::Jul) {
    return day + "/07/" + year;
  } else if (_dob.month == Month::Aug) {
    return day + "/08/" + year;
  } else if (_dob.month == Month::Sep) {
    return day + "/09/" + year;
  } else if (_dob.month == Month::Oct) {
    return day + "/10/" + year;
  } else if (_dob.month == Month::Nov) {
    return day + "/11/" + year;
  } else {
    return day + "/12/" + year;
  }
}
