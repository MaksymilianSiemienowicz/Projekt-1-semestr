//
// Created by siemi on 24/12/2022.
//

#include "Program.h"
#include <iostream>

void Program::askForChar() {
    char character;
    std::cout << "Enter your Char from asci: ";
    std::cin >> character;

    figure.setCharOfFigure(character);
}
