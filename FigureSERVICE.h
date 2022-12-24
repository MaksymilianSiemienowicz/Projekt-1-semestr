//
// Created by siemi on 24/12/2022.
//

#ifndef PROJEKT_FIGURESERVICE_H
#define PROJEKT_FIGURESERVICE_H
#include "Figure.h"

class FigureSERVICE {
private:
    int spacesAmount = 20;
    int endlAmount = 10;
    int moveChar;

public:
    //ALL ABOUT PRINTING FIGURE///////////
    void printingFigure(Figure figure);
    void setSpacesAmount(int spacesAmount);
    void setEndlAmount(int endlAmount);
    void printingEndl(int endlAmount);
    void printingSpaces(int spacesAmount);
    //////////////////////////////////////

    //ALL ABOUT MOVEMENT//////////////////
    void setMoveChar(int moveChar);
    void movingLeft(Figure figure);
    void movingRight(Figure figure);
    void movingDown(Figure figure);
    //////////////////////////////////////

};


#endif //PROJEKT_FIGURESERVICE_H
