#include <iostream>
#include <map>

int main() {
  // create a map of integers
  std::map<std::string, int> int_map;
  // add some value/key pairs
  int_map["Evans"] = 39;
  int_map["Smith"] = 65;
  int_map["Peters"] = 80;

  // can also add elements using insert()
  int_map.insert(std::pair<std::string, int>("Davies", 45));
  // and erase specific elements by supplying a key
  int_map.erase("Evans");

  // create an iterator to go through the map
  std::map<std::string, int>::iterator i;
  // iterate through and print
  for (i = int_map.begin(); i != int_map.end(); i++) {
    std::cout << "Key = '" << i->first << "' Value = " << i->second
              << std::endl;
  }

  // can access a specific value by providing a key
  int score = int_map["Peters"];
  std::cout << "Score = " << score << std::endl;

  // we can check whether a certain key exists
  std::string key = "Clarke";
  // the count() methods returns 0 if none are found
  if (int_map.count(key) == 0) {
    std::cout << key << " does not exist in the map\n";
  } else {
    std::cout << key << " does exist and has a value of " << int_map[key]
              << std::endl;
  }
  // try another key
  key = "Smith";
  if (int_map.count(key) == 0) {
    std::cout << key << " does not exist in the map\n";
  } else {
    std::cout << key << " does exist in the map and has a value of "
              << int_map[key] << std::endl;
  }
}