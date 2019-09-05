#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Person.h"

class Student : public Person {
 public:
  // constructors
  Student();
  Student(std::string forename, std::string surname, Date dob, int id,
          float grade);
  // mutators
  void set_id(int club);
  void set_grade(float _grade);
  // accessors
  int get_id();
  float get_grade();

 private:
  // private member variables
  int _id;
  float _grade;
};
#endif