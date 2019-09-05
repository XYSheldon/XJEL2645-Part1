#include <fstream>
#include <iostream>
#include <string>

// struct to hold student data
struct Student {
  std::string surname;
  int sid;         // student ID number
  int test1;       // test 1 grade (0 to 100)
  int test2;       // test 2 grade (0 to 100)
  int test3;       // test 3 grade (0 to 100)
  int test4;       // test 4 grade (0 to 100)
  double average;  // average of all tests (equal weight)
};

// function prototypes
int count_lines();
void read_into_array(Student array[], int n);
void print_array(const Student array[], int n);

int main() {
  // count the number of lines in the CSV
  int n = count_lines();
  std::cout << n << " lines read." << std::endl;
  // then create dynamic array of correct size
  Student *students = new Student[n];
  // read the CSV file into the array
  read_into_array(students, n);
  // and then print for debug purposes
  print_array(students, n);
}

int count_lines() {
  // create an input file stream
  std::ifstream input;
  // use it to open a file named 'MOCK_DATA.csv'
  input.open("MOCK_DATA.csv");
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
  return n;
}

void read_into_array(Student array[], int n) {
  // create an input file stream
  std::ifstream input;
  // use it to open a file named 'MOCK_DATA.csv'
  input.open("MOCK_DATA.csv");
  // check if the file is not open
  if (!input.is_open()) {
    // print error message and quit if a problem occurred
    std::cerr << "Error! No input file found!\n";
    exit(1);
  }
  std::string dummy;
  // loop through each line in file
  for (int i = 0; i < n; i++) {
    getline(input, dummy, ',');  // read until first comma
    array[i].surname = dummy;    // write to array
    getline(input, dummy, ',');  // read until next comma
    array[i].sid = std::stoi(dummy);
    getline(input, dummy, ',');  // read until next comma
    array[i].test1 = std::stoi(dummy);
    getline(input, dummy, ',');  // read until next comma
    array[i].test2 = std::stoi(dummy);
    getline(input, dummy, ',');  // read until next comma
    array[i].test3 = std::stoi(dummy);
    getline(input, dummy);  // for the last element, read until
    // end of line (default)
    array[i].test4 = std::stoi(dummy);
  }
}

void print_array(const Student array[], int n) {
  // just loop through array and print to terminal
  for (int i = 0; i < n; i++) {
    std::cout << array[i].surname << " | " << array[i].sid << " | "
              << array[i].test1 << " | " << array[i].test2 << " | "
              << array[i].test3 << " | " << array[i].test4 << std::endl;
  }
}