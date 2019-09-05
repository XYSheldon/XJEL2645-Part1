#include <fstream>
#include <iostream>
#include <string>

int main() {
  // create an input file stream
  std::ifstream input;
  // use it to open a file named 'input.txt'
  input.open("input.txt");
  // check if the file is not open
  if (!input.is_open()) {
    // print error message and quit if a problem occurred
    std::cerr << "Error! No input file found!\n";
    exit(1);
  }
  // create a string to hold the file contents
  std::string input_string;
  input >> input_string;
  // print to terminal
  std::cout << "Read \"" << input_string << "\" from file." << std::endl;
  // convert string to integer
  int input_value = std::stoi(input_string);
  int output_value = input_value * input_value;
  std::cout << "This value squared is " << output_value << "." << std::endl;
}