//
// Created by siemi on 24/12/2022.
//

#ifndef PROJEKT_FIGURE_H
#define PROJEKT_FIGURE_H


class Figure {

private:
    char charOfFigure;

public:
    int sizeOfFigure;
    Figure(){
        sizeOfFigure = 10;
        charOfFigure = '*';
    }

    int getSizeOfFigure();
    void incrementSize();
    void decrementSize();
    char getCharOfFigure();
    void setCharOfFigure(char ii);

};


#endif //PROJEKT_FIGURE_H
