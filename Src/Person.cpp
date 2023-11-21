#include "../Include/Person.hpp"

Person::Person  (const std::string & firstName, 
                 const std::string & surname, 
                 const std::string & pesel, 
                 const std::string & indexNumber) :
    firstName_(firstName), surname_(surname), pesel_(pesel), indexNumber_(indexNumber) {}

Gender Person::getGender() const {
    if((pesel_[9] - '0') % 2 == 0) { return Gender::Male; }
    else{ return Gender::Female; }
}

std::string Person::getGenderToString() const {
    if(getGender() == Gender::Male) { return "Male";}
    else { return "Female"; }
}

void Person::makeToUpper(){
    firstName_[0] = std::toupper(firstName_[0]);
    surname_[0] = std::toupper(surname_[0]);
}

