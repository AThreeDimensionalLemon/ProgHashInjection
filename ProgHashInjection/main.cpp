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

    std::cout << std::endl;
}

static void PrintAll() {

    for (int i = 0; i < 7; i++)
        PrintData(personArray[i][0]);
}

int main() {
    std::cout << "Eisig Liang - 2 Mar. 2025\n\nInput the 7 persons: ";

    Person J("J", "Cheese Cake", "1/5/2001");
    Person Bo("Bo", "Vanilla Ice Cream", "2/6/2002");
    Person Tuy("Tuy", "Fruit Salad", "3/7/2003");
    Person Alta("Alta", "Chocolate pudding", "4/8/2004");
    Person Kobet("Kobet", "Orange Jell-O", "5/9/2005");
    Person Teddie("Teddie", "Apple Pie", "6/10/2006");
    Person Sueanna("Sueanna", "Tres Leches Cake", "7/10/2007");

    std::array<Person, 7> iterationArray { J, Bo, Tuy, Alta, Kobet, Teddie, Sueanna };
    for (int i = 0; i < 7; i++) {
        Person person = iterationArray[i];
        PutData(person.getName(), person.getFavDesserts(), person.getDOB());
    }

    std::cout << "Done\n\nPrint out the data for the 7 persons:\n";
    PrintAll();

    std::cout << "Done\n\nPrint out data for just 1 person: ";

    std::string name;
    std::cin >> name;

    PrintData(name);

    std::cout << "Done";
    return 0;
}