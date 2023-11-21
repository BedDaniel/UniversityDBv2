#pragma once
#include "../Include/Person.hpp"
#include <iostream>
#include <string>

class Student : public Person {
public:
    Student() {}

    Student(const std::string & name,
            const std::string & surname,
            const std::string & address,
            const std::string & pesel) : 
    Person(name, surname, address, pesel)
    {
        indexNumber_ = ++counter;
        earnings_ = 0;
    }

    size_t getIndexNumber() const override { return indexNumber_; }
    size_t getEarnings() const override { return 0; }

    void setEarnings(const size_t & earnings) override { std::cout << "\nYou do not have permission to modify student's earnings.\n";}

private:
    size_t indexNumber_;
    static size_t counter;
};