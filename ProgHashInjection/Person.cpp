#include "Person.h"

std::string Person::getName() {
    return Name;
}

std::string Person::getFavDesserts() {
    return FavDesserts;
}

std::string Person::getDOB() {
    return DOB;
}

Person::Person(std::string inName, std::string favoriteDessert, std::string birthDate) {
    Name = inName;
    FavDesserts = favoriteDessert;
    DOB = birthDate;
}