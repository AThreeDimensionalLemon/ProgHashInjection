#pragma once
#include <string>
class Person {
private:
    std::string Name;
    std::string FavDesserts;
    std::string DOB;

public:
    Person(std::string inName, std::string favoriteDessert, std::string birthDate);
};

