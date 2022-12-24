//
// Created by siemi on 24/12/2022.
//

#include "FigureSERVICE.h"
#include <iostream>
#include <cmath>
#include <conio.h>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77


////DEFINE SETTERS AND GETTERS FOR SPACES AND ENDLINES
void FigureSERVICE::setEndlAmount(int endlAmount) {
    this->endlAmount = endlAmount;
}

void FigureSERVICE::setSpacesAmount(int spacesAmount) {
    this->spacesAmount = spacesAmount;
}

void FigureSERVICE::printingEndl(int endlAmount) {
    for(int i = 0; i < endlAmount; i++){
        std::cout << std::endl;
    }
}

void FigureSERVICE::printingSpaces(int spacesAmount) {
    for(int i = 0; i < spacesAmount; i++){
        std::cout << " ";
    }
}
////////////////////////////////////////////////////////

//PRINTING FIGURE///////////////////////////////////////
void FigureSERVICE::printingFigure(Figure figure) {
    printingEndl(endlAmount);
    for (int i = 0; i < figure.getSizeOfFigure(); i++) {
        printingSpaces(spacesAmount);
        for (int j = 0; j < i; j++) {
            if(j == floor(figure.getSizeOfFigure()/2)){
                std::cout << figure.getCharOfFigure();
            }else {
                std::cout << " ";
            }
        }
        std::cout << figure.getCharOfFigure() << std::endl;
    }
    for (int i = figure.getSizeOfFigure(); i >= 0; i--) {
        printingSpaces(spacesAmount);
        for (int j = 0; j < i; j++) {
            if(j == floor(figure.getSizeOfFigure()/2)){
                std::cout << figure.getCharOfFigure();
            }else {
                std::cout << " ";
            }
        }
        std::cout << figure.getCharOfFigure() << std::endl;
    }
}
/////////////////////////////////////////////////////////////