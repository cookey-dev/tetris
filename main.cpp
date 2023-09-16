#include <iostream>
#include "Matrix.hpp"

int main() {
    setlocale(LC_ALL, "");
    initscr();
    noecho();
    keypad(stdscr, true);
    nocbreak();
    start_color();
    Matrix mat;
    endwin();
    return 0;
}