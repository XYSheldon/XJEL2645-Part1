#ifndef PERSON_H
#define PERSON_H

#include <string>

// class enums for hair colour and month
enum class Month
{
  Jan,
  Feb,
  Mar,
  Apr,
  May,
  Jun,
  Jul,
  Aug,
  Sep,
  Oct,
  Nov,
  Dec
};

// POD struct to hold date of birth
struct Date
{
  int day;
  Month month;
  int year;
};
struct Height
{
  int feet;
  float inches;
};
struct Weight
{
  int stones;
  float pounds;
};
class Person
{
public:
  // constructors
  Person();
  Person(std::string forename, std::string surname, Date dob, Height height, Weight weight);
  // mutators
  void set_forename(std::string forename);
  void set_surname(std::string surname);
  void set_dob(Date dob);
  void set_height(Height height);
  void set_weight(Weight weight);
  // accessors
  std::string get_forename();
  std::string get_surname();
  std::string get_dob();
  std::string get_height();
  std::string get_weight();

private:
  std::string _forename;
  std::string _surname;
  Date _dob;
  Height _height;
  Weight _weight;
};
#endif