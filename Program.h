//
// Created by siemi on 24/12/2022.
//

#ifndef PROJEKT_PROGRAM_H
#define PROJEKT_PROGRAM_H

#include <iostream>
#include <cstdlib>
#include "model/Figure.h"
#include "service/FigureSERVICE.h"

class Program {
private:
    Figure figure;
public:
    Program(){
        FigureSERVICE figureService(figure);
        figureService.setStartEndlAmount();
        figureService.setStartSpacesAmount();
        askForChar();
        system("cls");
        for(;;) {
            std::cout << figure.getSizeOfFigure();
            figureService.printingFigure();
            figureService.moveChar();
            figureService.moving();
           // figure.decrementSize();  /// to dziala -------- figureService.ChangeSize - nie dziala;
            system("cls");
        }
    }
    void askForChar();
};


#endif //PROJEKT_PROGRAM_H
