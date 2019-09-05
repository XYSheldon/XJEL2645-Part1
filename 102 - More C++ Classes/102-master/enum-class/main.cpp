#include <iostream>

enum class Vegetable { Potato, Carrot, Onion };
enum class Fruit { Apple, Banana, Pear };

int main() {
  // create enum class types
  Vegetable veg = Vegetable::Potato;
  Fruit fruit = Fruit::Apple;

  // this causes a compile error as the types are now different
  if (fruit == veg) {
    std::cout << "The types are the same!\n";
  }

  return 0;
}