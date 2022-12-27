//
// Created by siemi on 24/12/2022.
//

#ifndef PROJEKT_FIGURESERVICE_H
#define PROJEKT_FIGURESERVICE_H
#include "../model/Figure.h"
#include "cmdSERVICE.h"

class FigureSERVICE {
private:
    int spacesAmount = 20;
    int endlAmount = 10;

    Figure figure;

    cmdSERVICE cmdService;

public:
    //CONSTRUCTOR/////////////////////////
    FigureSERVICE(Figure jeden){
        figure = jeden;
    }
    //ALL ABOUT PRINTING FIGURE///////////
    void printingFigure();
    void setStartSpacesAmount();
    void setStartEndlAmount();
    static void printingEndl(int endlAmount);
    static void printingSpaces(int spacesAmount);
    //////////////////////////////////////

    //ALL ABOUT MOVEMENT//////////////////
    int moveChar();
    void moving();
    void changeSize();
    //////////////////////////////////////

};


#endif //PROJEKT_FIGURESERVICE_H
