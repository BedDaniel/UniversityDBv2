#pragma once

#include <string>


enum class Gender
{ 
    Male, 
    Female 
};

class Person{
public:
    Person(){};

    Person  (const std::string & firstName, 
             const std::string & surname,
             const std::string & address,
             const std::string & pesel)
    {
        setGender();
        makeToUpper();
    }

    std::string getFirstName()  const { return firstName_; }
    std::string getLastName()   const { return surname_; }
    std::string getAddress()    const { return address_;}
    std::string getPesel()      const { return pesel_; }
    Gender getGender()          const { return gender_; }
    std::string getGenderToString() const;

    void setFirstName(const std::string & firstName)     { firstName_ = firstName; }
    void setLastName(const std::string & lastName)       { surname_ = lastName; }
    void setPesel(const std::string & pesel)             { pesel_ = pesel;}
    void setAddress(const std::string & address)         { address_ = address; }
    void setIndexNumber(const std::string & indexNumber) { indexNumber_=indexNumber;}
    void setGender();

    virtual size_t getEarnings() const = 0;
    virtual size_t getIndexNumber() const = 0;
    virtual void setEarnings(const size_t & earnings) = 0;

protected:
    std::string firstName_;
    std::string surname_;
    std::string address_;
    std::string pesel_;
    std::string indexNumber_;
    size_t earnings_;
    Gender gender_;

    void makeToUpper();
};