#include <algorithm>
#include <iostream>
#include <vector>

bool sort_descending(int i, int j) { return i > j; }

int main() {
  // create an empty vector
  std::vector<int> v;

  // add some values (push_back() adds values to the end)
  v.push_back(2);
  v.push_back(9);
  v.push_back(8);
  v.push_back(3);
  v.push_back(4);
  v.push_back(1);
  v.push_back(5);
  v.push_back(7);
  v.push_back(6);
  v.push_back(0);

  // get the size
  std::cout << "The vector has " << v.size() << " elements.\n";

  // we can access specific elements
  std::cout << "Element 2 is " << v[2] << std::endl;

  std::cout << "The contents are:\n";
  // iterate through and print values
  for (std::vector<int>::iterator i = v.begin(); i < v.end(); i++) {
    std::cout << *i << std::endl;
  }

  // we can easy delete the last element
  v.pop_back();
  
  std::cout << "The contents are now:\n";
  // iterate through and print values
  for (std::vector<int>::iterator i = v.begin(); i < v.end(); i++) {
    std::cout << *i << std::endl;
  }

  // we can use the 'sort' method from <algorithm> to sort values
  std::sort(v.begin(), v.end());
  std::cout << "The contents are now:\n";
  // iterate through and print values
  for (std::vector<int>::iterator i = v.begin(); i < v.end(); i++) {
    std::cout << *i << std::endl;
  }

  // this does it ascending by default (<), so need to provide our own function
  // to sort descending
  std::sort(v.begin(), v.end(), sort_descending);
  std::cout << "The contents are now:\n";
  // iterate through and print values
  for (std::vector<int>::iterator i = v.begin(); i < v.end(); i++) {
    std::cout << *i << std::endl;
  }

  // we can also erase elements by specifing either a single element
  v.erase(v.begin());  // delete the first element (0)
  // or by specifying a range (0,1,2,3)
  v.erase(v.begin(), v.begin() + 3);
  std::cout << "The contents are now:\n";
  // iterate through and print values
  for (std::vector<int>::iterator i = v.begin(); i < v.end(); i++) {
    std::cout << *i << std::endl;
  }

  // it is also possible to insert values at the specified position
  v.insert(v.begin(), 6);
  v.insert(v.end(), 0);
  std::cout << "The contents are now:\n";
  // iterate through and print values
  for (std::vector<int>::iterator i = v.begin(); i < v.end(); i++) {
    std::cout << *i << std::endl;
  }
}
