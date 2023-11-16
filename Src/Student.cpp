#include "Student.hpp"

Student::Student() {}

Student::Student(const std::string & firstName, 
                 const std::string & lastName, 
                 const std::string & pesel, 
                 const Address & address,
                 const std::string & indexNumber, 
                 const Gender & gender) :
    firstName_(firstName), lastName_(lastName), pesel_(pesel), address_(address), indexNumber_(indexNumber), gender_(gender) {}

