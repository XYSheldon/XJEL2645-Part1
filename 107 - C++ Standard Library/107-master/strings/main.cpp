#include <iostream>
#include <string>

int main() {
  // create a string
  std::string my_string = "1";
  // then conver to an int
  int my_int = std::stoi(my_string);
  std::cout << "My int is " << my_int << std::endl;
  // do similar for a double
  std::string my_new_string = "1.23456789";
  double my_double = std::stod(my_new_string);
  std::cout << "My double is " << my_double << std::endl;

  // we can also go to other way
  int my_new_int = 6;
  std::string another_new_string = std::to_string(my_new_int);

  // to string also works with doubles
  double my_new_double = 9.999999;
  std::string yet_another_new_string = std::to_string(my_new_double);

  // we easily concatenate strings using the string class
  std::string forename = "Craig";
  std::string surname = "Evans";
  std::string fullname = forename + " " + surname;
  std::cout << "My name is " << fullname << std::endl;

  // we can also do some more interesting stuff
  char first_initial = forename.front();
  char second_initial = surname.front();
  // front gets the first character of string
  // you can probably guess what back() does
  // we could also treat it like an array i.e. forename[0]
  std::cout << "My initials are " << first_initial << second_initial
            << std::endl;

  std::cout << "My surname has " << surname.size() << " letters.\n";

  // we can insert a substring into a string
  std::string middle_initial = "A. ";
  fullname.insert(6, middle_initial);
  std::cout << "My full name is " << fullname << std::endl;

  // and also search for substrings
  // create a csv string
  std::string csv = "Evans,87";

  // find the position of the comma
  std::size_t pos = csv.find(',');
  std::string name;
  int score;
  // if the string contains a comma
  if (pos != std::string::npos) {
    // the name is from the beginning (0) to the comma (pos)
    name = csv.substr(0, pos);
    // the score is after the comma (pos+1) to the end
    score = std::stoi(csv.substr(pos + 1));
    std::cout << "Name: " << name << " Score = " << score << std::endl;
  }
}