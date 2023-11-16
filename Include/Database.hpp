#include <string>
#include <vector>
#include <memory>
class Database{
public:
    Database();

private:
    std::vector<std::shared_ptr<Person>> VectorOfPersons;
    



};