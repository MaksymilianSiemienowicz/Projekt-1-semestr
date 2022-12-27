//
// Created by siemi on 25/12/2022.
//

#ifndef PROJEKT_CMDSERVICE_H
#define PROJEKT_CMDSERVICE_H

#include <windows.h>


class cmdSERVICE {
private:
    CONSOLE_SCREEN_BUFFER_INFO csbi;


public:
    int getConsoleWidth();
    int getConoleHeight();
};


#endif //PROJEKT_CMDSERVICE_H
