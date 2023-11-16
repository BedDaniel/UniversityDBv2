#include "../Include/Student.hpp"

Student::Student(const std::string & firstName, 
                 const std::string & surname, 
                 const std::string & pesel, 
                 const std::string & indexNumber) :
    firstName_(firstName), surname_(surname), pesel_(pesel), indexNumber_(indexNumber) {}

