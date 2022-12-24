//
// Created by siemi on 24/12/2022.
//

#ifndef PROJEKT_FIGURE_H
#define PROJEKT_FIGURE_H


class Figure {

private:
    int sizeOfFigure = 5;
    char charOfFigure = '*';

public:
    Figure(){

    }

    int getSizeOfFigure();
    void setSizeOfFigure(int sizeOfFigure);
    char getCharOfFigure();
    void setCharOfFigure(char charOfFigure);

};


#endif //PROJEKT_FIGURE_H
