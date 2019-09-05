#include <cmath>
#include <fstream>
#include <iostream>

const double PI = 3.14159265359;

int main() {
  // create an output file stream
  std::ofstream output;
  // use it to open a file named 'output.txt'
  output.open("output.csv");
  // check if the file is not open
  if (!output.is_open()) {
    // print error message and quit if a problem occurred
    std::cerr << "Error creating file!\n";
    exit(1);
  }

  // loop through values 0 to 2PI in small steps
  for (double x = 0.0; x <= 2 * PI; x += 0.01) {
    // print x and sin(x) in CSV format
    output << x << "," << sin(x) << std::endl;
  }
  output.close();
}