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
#define KEY_PLUS 43
#define KEY_MINUS 45


////DEFINE SETTERS AND GETTERS FOR SPACES AND ENDLINES
void FigureSERVICE::setStartEndlAmount() {
    endlAmount = (cmdService.getConoleHeight()-figure.getSizeOfFigure())/2-2;
}

void FigureSERVICE::setStartSpacesAmount() {
    spacesAmount =(cmdService.getConsoleWidth() - figure.getSizeOfFigure())/2;
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
void FigureSERVICE::printingFigure() {
    printingEndl(endlAmount);
    for (int i = 0; i < figure.getSizeOfFigure(); i++) {
        printingSpaces(spacesAmount);
        for (int j = 0; j < i; j++) {
            if(j == figure.getSizeOfFigure()/2){
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
            if(j == figure.getSizeOfFigure()/2){
                std::cout << figure.getCharOfFigure();
            }else {
                std::cout << " ";
            }
        }
        std::cout << figure.getCharOfFigure() << std::endl;
    }
}
/////////////////////////////////////////////////////////////

///////MOVING////////////////////////////////////////////////
int FigureSERVICE::moveChar() {
    int c = _getch();
    return c;
}

void FigureSERVICE::moving(){
    switch (moveChar()) {
        case KEY_UP:
            if(endlAmount > 1){
                endlAmount--;
            }
            break;
        case KEY_DOWN:
            if(endlAmount + figure.getSizeOfFigure()*2+1 < cmdService.getConoleHeight()) {
                endlAmount++;
            }
            break;
        case KEY_LEFT:
            if(spacesAmount > 0){
                spacesAmount--;
            }
            break;
        case KEY_RIGHT:
            if(spacesAmount + figure.getSizeOfFigure() < cmdService.getConsoleWidth()) {
                spacesAmount++;
            }
            break;
        case 49:
            if(figure.getSizeOfFigure()+1 < cmdService.getConoleHeight()) {
                if(endlAmount > 0){
                    endlAmount -=2;
                }
                figure.incrementSize();
            }
            break;
        case 50:
            if(figure.getSizeOfFigure() >= 0) {
                figure.decrementSize();
            }
            break;
    }
}