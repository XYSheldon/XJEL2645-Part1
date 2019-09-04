#include "Parents.h"
#include "Person.h"
#include <iostream>

int main() {
  Person best_friend;
  best_friend.name = "John";
  std::cout << "My best friend is " << best_friend.name << ".\n";

  Parents my_parents;
  my_parents.father.name = "William";
  my_parents.mother.name = "Susan";

  std::cout << "My parents are called " << my_parents.father.name << " and "
            << my_parents.mother.name << ".\n";
}