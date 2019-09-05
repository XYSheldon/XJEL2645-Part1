#include <fstream>
#include <iostream>

int main() {
  // create an output file stream
  std::ofstream output;
  // use it to open a file named 'output.txt'
  output.open("output.txt");
  // check if the file is not open
  if (!output.is_open()) {
    // print error message and quit if a problem occurred
    std::cerr << "Error creating file!\n";
    exit(1);
  }
  // print to the file and then close the stream
  output << "Hello, File!" << std::endl;
  output.close();

  // Re-open file in 'append' mode so we can write more to it
  // if we do not open in 'append' mode, the original contents
  // will be written over
  output.open("output.txt", std::fstream::app);
  output << "Appending a line!" << std::endl;
  // always remember to close a filestream when done
  output.close();
}