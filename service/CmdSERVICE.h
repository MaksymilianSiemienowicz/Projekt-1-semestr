//
// Created by siemi on 25/12/2022.
//

#ifndef PROJEKT_CMDSERVICE_H
#define PROJEKT_CMDSERVICE_H

#include <windows.h>


class CmdSERVICE {
private:
    CONSOLE_SCREEN_BUFFER_INFO csbi; //Windows.h variable, need it to get window size


public:
    //Getters for X,Y window size
    int getConsoleWidth();
    int getConsoleHeight();
};


#endif //PROJEKT_CMDSERVICE_H
