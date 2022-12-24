//
// Created by siemi on 24/12/2022.
//

#ifndef PROJEKT_PROGRAM_H
#define PROJEKT_PROGRAM_H

#include <cstdlib>
#include "Figure.h"
#include "FigureSERVICE.h"

class Program {
private:
    Figure figure;
    FigureSERVICE figureService;
public:
    Program(){
        askForChar();
        system("cls");
        figureService.printingFigure(figure);
    }
    void askForChar();
};


#endif //PROJEKT_PROGRAM_H
