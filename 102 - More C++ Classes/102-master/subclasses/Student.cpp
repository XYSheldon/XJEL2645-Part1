#include "Student.h"

// constructors (default)
Student::Student() : Person(), _id{0}, _grade{0.00} {}
// constructor (user-specified)
Student::Student(std::string forename, std::string surname, Date dob, int id,
                 float grade)
    : Person{forename, surname, dob}, _id{id}, _grade{grade} {}

// mutators
void Student::set_id(int id) { _id = id; }
void Student::set_grade(float grade) { _grade = grade; }
// accessors
int Student::get_id() { return _id; }
float Student::get_grade() { return _grade; }
