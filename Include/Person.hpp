#pragma once

#include <string>

enum class Gender
{ 
    Male, 
    Female 
};

class Person{
public:
    Student(){};
    Student(const std::string & firstName, 
            const std::string & surname,
            const std::string & address,
            const std::string & pesel, 
            const std::string & indexNumber);

    std::string getFirstName()   { return firstName_; }
    std::string getLastName()    { return surname_; }
    std::string getPesel()       { return pesel_; }
    std::string getIndexNumber() { return indexNumber_; }
    Gender getGender()           { return Gender::gender_; }

    void setFirstName(const std::string & firstName)     { firstName_ = firstName; }
    void setLastName(const std::string & lastName)       { surname_ = lastName; }
    void setPesel(const std::string & pesel)             { pesel_ = pesel;}
    void setAddress(const std::string & address)         { address_ = address; }
    void setIndexNumber(const std::string & indexNumber) { indexNumber_=indexNumber;}

private:
    std::string firstName_;
    std::string surname_;
    std::string address_;
    std::string pesel_;
    std::string indexNumber_;




};