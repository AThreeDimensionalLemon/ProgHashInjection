#include <iostream>
#include <array>
#include <string>
#include "Person.h"

std::array<std::array<std::string, 3>, 7> personArray;

static void oneToOneFunction(std::array<std::string, 3> person) {
    personArray[person[0].length() - 1] = person;
}

static int hashFunction(std::string name) {

    for (int i = 0; i < 7; i++) {

        if (personArray[i][0] == name)
            return i + 1;
    }

    return 0;
}

int main() {
    std::cout << "Eisig Liang - 2 Mar. 2025\n";

    std::array<std::string, 7> Name{ "J", "Bo", "Tuy", "Alta", "Kobet", "Teddie", "Sueanna" };
    std::array<std::string, 7> DOB{ "1/5/2001","2/6/2002","3/7/2003","4/8/2004","5/9/2005","6/10/2006" };
    std::array<std::string, 7> FavDessert{ "Cheese Cake", "Vanilla Ice Cream", "Fruit Salad", "Chocolate pudding", "Orange Jell-O", "Apply Pie", "Tres Leches Cake" };

    for (int i = 0; i < 7; i++) {
        std::array<std::string, 3> person{ Name[i], DOB[i], FavDessert[i] };
        oneToOneFunction(person);
    }
}