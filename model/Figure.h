//
// Created by siemi on 24/12/2022.
//

#ifndef PROJEKT_FIGURE_H
#define PROJEKT_FIGURE_H


class Figure {

private:
   int sizeOfFigure = 10;
    char charOfFigure = '*';

public:

    int getSizeOfFigure();
    void incrementSize();
    void decrementSize();
    char getCharOfFigure();
    void setCharOfFigure(char ii);

};


#endif //PROJEKT_FIGURE_H
