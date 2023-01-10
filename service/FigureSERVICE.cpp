//
// Created by siemi on 24/12/2022.
//

#include "FigureSERVICE.h"
#include <iostream>
#include <conio.h>

//Define arrow and '+', '-' chars ASCI code
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_PLUS 43
#define KEY_MINUS 45



//Asking for char and setting it as figure character
void FigureSERVICE::askForChar() {
    char character;
    std::cout << "Enter your Char from asci: ";
    std::cin >> character;
    figure.setCharOfFigure(character);
}


//Asking for size and setting is as figure size
void FigureSERVICE::askForSize() {
    start:
    int size;
    std::cout << "Enter size of figure: ";
    std::cin >> size;
    if(size*2+1> cmdService.getConsoleHeight()){
        std::cout << "Size is too big, resize window or enter smaller value.";
        std::cout << std:: endl;
        goto start;
    }
    if(size <= 0){
        std::cout << "Size is to small! Enter bigger value." << std::endl;
        goto start;
    }
    figure.setSizeOfFigure(size);

}


//Setting endlines amount to center figure on Y's
void FigureSERVICE::setStartEndlAmount() {
    endlAmount = (cmdService.getConsoleHeight() - (2 * figure.getSizeOfFigure() + 1)) / 2;
}

//Setting spaces amount to center figure on X's
void FigureSERVICE::setStartSpacesAmount() {
    spacesAmount =(cmdService.getConsoleWidth() - (figure.getSizeOfFigure()+1))/2;
}

//Printing endlines, need it to move figure
void FigureSERVICE::printingEndl(int endlAmount) {
    for(int i = 0; i < endlAmount; i++){
        std::cout << std::endl;
    }
}

//Printing spaces, need it to move figure
void FigureSERVICE::printingSpaces(int spacesAmount) {
    for(int i = 0; i < spacesAmount; i++){
        std::cout << " ";
    }
}


//PRINTING FIGURE METHOD
void FigureSERVICE::printingFigure() {
    printingEndl(endlAmount); //First we print endlines to set position on Y's
    for (int i = 0; i < figure.getSizeOfFigure(); i++) {  //PRINTING FIRST PART OF FIGURE
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


    for (int i = figure.getSizeOfFigure(); i >= 0; i--) { //PRNTING 2nd PART OF FIGURE
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

//Setting move char
void FigureSERVICE::setMoveChar() {
    int c;
    c = _getch();
    moveChar = c;
}
//Move or increase/decrease figure
void FigureSERVICE::moving(){
    switch (moveChar) {
        case KEY_UP:    //Moving up, then we need to decrease endline amonut
            if(endlAmount > 1){
                endlAmount--;
            }
            break;
        case KEY_DOWN: //Moving down
            if(endlAmount + figure.getSizeOfFigure()*2+1 < cmdService.getConsoleHeight()) {
                endlAmount++;
            }
            break;
        case KEY_LEFT:  //Moving left
            if(spacesAmount > 0){
                spacesAmount--;
            }
            break;
        case KEY_RIGHT: //Moving right
            if(spacesAmount + figure.getSizeOfFigure() < cmdService.getConsoleWidth()) {
                spacesAmount++;
            }
            break;
        case KEY_PLUS: //Increasing size of figure
            if(2*figure.getSizeOfFigure()+3 < cmdService.getConsoleHeight()){
                if(cmdService.getConsoleHeight() - endlAmount - 2 * figure.getSizeOfFigure() - 1 <= 0){
                        endlAmount-=2;
                        figure.incrementSize();
                    }
                else if(endlAmount > 1){
                    endlAmount --;
                    figure.incrementSize();
                    if(cmdService.getConsoleWidth() - spacesAmount - figure.getSizeOfFigure() - 1 <= 0){
                        spacesAmount--;
                    }
                }
                else if(endlAmount == 1 && 2 * figure.getSizeOfFigure() + 2 < cmdService.getConsoleHeight()){
                    if(cmdService.getConsoleWidth() - spacesAmount - figure.getSizeOfFigure() - 1 <= 0){
                        spacesAmount--;
                    }
                    endlAmount++;
                    figure.incrementSize();
                    endlAmount--;
                }
            }
            break;
        case KEY_MINUS: //Decreasing size of figure
            if(figure.getSizeOfFigure() > 0) {
                figure.decrementSize();
            }
            break;
    }
}

void FigureSERVICE::figureTerminalSizeCheck() {
    if(figure.getSizeOfFigure() * 2 + 2 > cmdService.getConsoleHeight() ||
       spacesAmount + figure.getSizeOfFigure() > cmdService.getConsoleWidth()){

        figure.setSizeOfFigure(1);
        setStartSpacesAmount();
        setStartEndlAmount();
        system("cls");
        printingFigure();

    }
}
