#include <iostream>

// Simple dummy class for example purposes
class Foo {
 public:
  int bar;
};

int main() {
  // create an object of class 'Foo' and use the dot operator (.)
  // to access a member variable
  Foo foo;
  foo.bar = 99;

  // create a *pointer* to an object of class 'Foo'
  // note we use the 'new' operator to allocate memory and
  // construct a 'Foo' object there
  Foo *pointer = new Foo();
  // since it is a pointer, we use the arrow operator (->)
  // to access a member variable
  pointer->bar = 77;
}