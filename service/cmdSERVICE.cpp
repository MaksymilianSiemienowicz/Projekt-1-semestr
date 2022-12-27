//
// Created by siemi on 25/12/2022.
//

#include "cmdSERVICE.h"

int cmdSERVICE::getConsoleWidth() {
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    return csbi.srWindow.Right - csbi.srWindow.Left;

}

int cmdSERVICE::getConoleHeight() {
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    return csbi.srWindow.Bottom - csbi.srWindow.Top;
}
