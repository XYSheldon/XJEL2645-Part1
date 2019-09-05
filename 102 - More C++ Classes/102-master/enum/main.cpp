#include <iostream>

// constants in the list are assigned integers: 0,1,2 etc.
enum Vegetable { Potato, Carrot, Onion };
enum Fruit { Apple, Banana, Pear };

int main() {
  // create enum types and assign values (both are 0)
  Vegetable veg = Potato;
  Fruit fruit = Apple;
  // we can directly compare as they are essentially integers
  if (fruit == veg) {
    std::cout << "The types are the same!\n";
  }
  return 0;
}