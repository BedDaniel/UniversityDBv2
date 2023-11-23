#include <string>
#include <vector>
#include <memory>
#include "../Include/Person.hpp"
#include "../Include/Employee.hpp"
#include "../Include/Student.hpp"

class Database{
public:
    Database(){};

    Database(const std::vector<std::shared_ptr<Person>> & vectorOfPeople) : peopleInDatabase_(vectorOfPeople) {};

    std::vector<std::shared_ptr<Person>> getPeopleInDatabase() const { return peopleInDatabase_; }

    void clearPeopleInDatabase() { peopleInDatabase_.clear();}

    void add(const std::shared_ptr<Person> & person);
    void add(const Student & student);
    void add(const Employee & employee);

    void showDatabase();

    void sortBySurname();
    void sortByPesel();
    void sortByEarnings();
    void removeByIndexNumber();
    
    void changeEarnings();
private:
    std::vector<std::shared_ptr<Person>> peopleInDatabase_;
    



};