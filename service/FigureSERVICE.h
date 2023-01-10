//
// Created by siemi on 24/12/2022.
//

#ifndef PROJEKT_FIGURESERVICE_H
#define PROJEKT_FIGURESERVICE_H
#include "../model/Figure.h"
#include "CmdSERVICE.h"

class FigureSERVICE {
private:
    //Variables
    int spacesAmount = 20;
    int endlAmount = 10;
    int moveChar;

    Figure figure;

    CmdSERVICE cmdService;

public:
    //CONSTRUCTOR
    FigureSERVICE(Figure figure){
        this->figure = figure;
    }

    void askForSize();
    void askForChar();
    void printingFigure();
    void setStartSpacesAmount();
    void setStartEndlAmount();
    static void printingEndl(int endlAmount);
    static void printingSpaces(int spacesAmount);

    //Movement methods
    void setMoveChar();
    void moving();

    void figureTerminalSizeCheck();
};


#endif //PROJEKT_FIGURESERVICE_H
