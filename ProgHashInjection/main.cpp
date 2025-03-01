#include <iostream>
#include <array>
#include <string>
#include "Person.h"

void hash(std::array<std::array<std::string, 3>, 7> mainArray, std::array<std::string, 3> personArray) {
    mainArray[personArray[0].length() - 1] = personArray;
}

int main() {
    std::cout << "Eisig Liang - 2 Mar. 2025\n";

    std::array<std::array<std::string, 3>, 7> personArray;
}