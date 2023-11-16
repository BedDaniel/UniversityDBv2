#pragma once

#include <iostream>
#include <string>

class Student{
public:
    Student();
    Student(const std::string & firstName, 
           const std::string & lastName, 
           const std::string & pesel, 
           const Address & address,
           const std::string & indexNumber, 
           const Gender & gender);

    std::string getFirstName() { return firstName_; }
    std::string getLastName() { return lastName_; }
    std::string getPesel() { return pesel_; }
    std::string getIndexNumber() { return indexNumber_; }
    Address getAddress() { return Address::address_; }
    Gender getGender() { return Gender::gender_; }

    void setFirstName(const std::string & firstName) { firstName_ = firstName; }
    void setLastName(const std::string & lastName) { lastName_ = lastName; }
    void setPesel(const std::string & pesel) { pesel_ = pesel;}
    void setIndexNumber(const std::string & indexNumber) { indexNumber_=indexNumber;}

private:
    std::string firstName_;
    std::string lastName_;
    std::string pesel_;
    Address address;
    std::string indexNumber_;
    Gender gender_;




};