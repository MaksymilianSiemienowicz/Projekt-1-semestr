//
// Created by siemi on 25/12/2022.
//

#include "CmdSERVICE.h"

//Getting console X size
int CmdSERVICE::getConsoleWidth() {
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    return csbi.srWindow.Right - csbi.srWindow.Left;

}

//Getting console Y size
int CmdSERVICE::getConsoleHeight() {
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    return csbi.srWindow.Bottom - csbi.srWindow.Top;
}
