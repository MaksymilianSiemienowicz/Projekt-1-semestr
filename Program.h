//
// Created by siemi on 24/12/2022.
//

#ifndef PROJEKT_PROGRAM_H
#define PROJEKT_PROGRAM_H

#include <iostream>
#include <cstdlib>
#include <conio.h>
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
        figureService.askForChar(figure);
        system("cls");
        figureService.printingFigure();
        for(;;) {
            while(_kbhit()){
                figureService.setMoveChar();
                figureService.moving();
                system("cls");
                figureService.printingFigure();
            }
        }
    }
};


#endif //PROJEKT_PROGRAM_H
