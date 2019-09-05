#include <algorithm>
#include <chrono>
#include <fstream>
#include <iostream>
#include <random>
#include <string>

// function prototypes
void write_random_number_file();
int get_random_number(int low, int high);
int count_lines();
void read_into_array(int array[], int n);
void order_array(int array[], int n);
void write_array_to_file(int array[], int n);

int main() {
  // write random numbers to file 'random.txt'
  write_random_number_file();
  // count the lines and create array of correct size
  int n = count_lines();
  int *array = new int[n];
  // read the random numbers into the array
  read_into_array(array, n);
  // order the values in the array
  order_array(array, n);
  // then write ordered values to file 'ordered.txt'
  write_array_to_file(array, n);
}

void write_random_number_file() {
  // create an output file stream
  std::ofstream output;
  // use it to open a file named 'output.txt'
  output.open("random.txt");
  // check if the file is not open
  if (!output.is_open()) {
    // print error message and quit if a problem occurred
    std::cerr << "Error creating file!\n";
    exit(1);
  }
  // write 100 random numbers in range 0 to 100 to the file
  for (int i = 0; i < 100; i++) {
    int number = get_random_number(0, 100);
    output << number << std::endl;
  }
  output.close();
}

// get random number in range
int get_random_number(int low, int high) {
  int seed =
      std::chrono::high_resolution_clock::now().time_since_epoch().count();
  std::mt19937 generator(seed);
  std::uniform_int_distribution<int> distribution(low, high);
  return distribution(generator);
}

int count_lines() {
  // create an input file stream
  std::ifstream input;
  // use it to open a file named 'random.txt'
  input.open("random.txt");
  // check if the file is not open
  if (!input.is_open()) {
    // print error message and quit if a problem occurred
    std::cerr << "Error! No input file found!\n";
    exit(1);
  }
  int n = 0;
  std::string dummy;
  // keep reading lines in file until no lines left to read
  // read into dummy string and increment count
  while (getline(input, dummy)) {
    n++;
  }
  input.close();
  return n;
}

void read_into_array(int array[], int n) {
  // create an input file stream
  std::ifstream input;
  // use it to open a file named 'MOCK_DATA.csv'
  input.open("random.txt");
  // check if the file is not open
  if (!input.is_open()) {
    // print error message and quit if a problem occurred
    std::cerr << "Error! No input file found!\n";
    exit(1);
  }
  // loop through each line in file
  std::string dummy;
  for (int i = 0; i < n; i++) {
    input >> dummy;
    // read in value, covert to int and write to array
    array[i] = std::stoi(dummy);
  }
  input.close();
}

void order_array(int array[], int n) {
  std::sort(array, array + n);  // ascending
  // std::sort(array, array + n, std::greater<int>());  // descending
}

void write_array_to_file(int array[], int n) {
  // create an output file stream
  std::ofstream output;
  // use it to open a file named 'output.txt'
  output.open("ordered.txt");
  // check if the file is not open
  if (!output.is_open()) {
    // print error message and quit if a problem occurred
    std::cerr << "Error creating file!\n";
    exit(1);
  }
  // loop through and print array
  for (int i = 0; i < n; i++) {
    output << array[i] << std::endl;
  }
  output.close();
}
