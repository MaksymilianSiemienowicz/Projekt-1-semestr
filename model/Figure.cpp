//
// Created by siemi on 24/12/2022.
//

#include "Figure.h"

void Figure::setSizeOfFigure(int sizeOfFigure) {
    this->sizeOfFigure = sizeOfFigure;
}


int Figure::getSizeOfFigure() {
    return sizeOfFigure;
}

void Figure::incrementSize() {
    sizeOfFigure += 1;
}

void Figure::decrementSize() {
    sizeOfFigure -= 1;
}

char Figure::getCharOfFigure() {
    return charOfFigure;
}

void Figure::setCharOfFigure(char charOfFigure) {
    this->charOfFigure = charOfFigure;

}

