#pragma once
#include "../Include/Person.hpp"

class Employee : public Person {
public:
    Employee(){}

    Employee(const std::string firstName,
            const std::string surname,
            const std::string address,
            const std::string pesel,
            const size_t earnings) :
    Person(firstName, surname, address, pesel) 
    {
        earnings_ = earnings;
    }
    size_t getEarnings() const override { return earnings_;}
    size_t getIndexNumber() const override { return 100;}

    void setEarnings(const size_t & earnings) { earnings_ = earnings; }

};