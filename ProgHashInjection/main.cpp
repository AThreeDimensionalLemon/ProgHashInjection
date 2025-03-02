#include <iostream>
#include <array>
#include <string>
#include "Person.h"

std::array<std::array<std::string, 3>, 7> personArray;

static void oneToOneFunction(std::array<std::string, 3> person) {

    //I'm not sure if "Write the one-to-one function that hashes the 'name' into an unique array index." is a directive or a summary of what I'm supposed to be doing.
    //For the overall program, I've written it assuming the latter, effectively making this function pointless.
    //This function is a result of assuming the former, and will be kept in case that was the correct assumption.

    personArray[person[0].length() - 1] = person;
}

static int hashFunction(std::string name) {
    return name.length() - 1;
}

static void PutData(std::string inName, std::string favDessert, std::string DOB) {
    std::array<std::string, 3>* person = &personArray[hashFunction(inName)];
    (*person)[0] = inName;
    (*person)[1] = favDessert;
    (*person)[2] = DOB;
}

static void PrintData(std::string inName) {
    std::array<std::string, 3> person{ personArray[hashFunction(inName)] };

    for (int i = 0; i < 3; i++)
        std::cout << person[i] << std::endl;
}

static void PrintAll() {

    for (int i = 0; i < 7; i++)
        PrintData(personArray[i][0]);
}

int main() {
    std::cout << "Eisig Liang - 2 Mar. 2025\n";

    std::array<std::string, 7> Name{ "J", "Bo", "Tuy", "Alta", "Kobet", "Teddie", "Sueanna" };
    std::array<std::string, 7> DOB{ "1/5/2001","2/6/2002","3/7/2003","4/8/2004","5/9/2005","6/10/2006" };
    std::array<std::string, 7> FavDessert{ "Cheese Cake", "Vanilla Ice Cream", "Fruit Salad", "Chocolate pudding", "Orange Jell-O", "Apply Pie", "Tres Leches Cake" };

    for (int i = 0; i < 7; i++)
        PutData(Name[i], FavDessert[i], DOB[i]);


}