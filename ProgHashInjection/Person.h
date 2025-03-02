#pragma once
#include <string>
class Person {
private:
    std::string Name;
    std::string FavDesserts;
    std::string DOB;

public:
    std::string getName();
    std::string getFavDesserts();
    std::string getDOB();
    Person(std::string inName, std::string favoriteDessert, std::string birthDate);
};

