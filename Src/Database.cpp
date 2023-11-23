#include "../Include/Database.hpp"

#include <vector>
#include <memory>

Database::add(const std::shared_ptr<Person> & person){
    peopleInDatabase_.push_back(person);

}