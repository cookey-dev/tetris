#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <cursesw.h>

using namespace std;

class Matrix {
public:
    Matrix() {
        init_main();
    }
protected:
    string def_full = "█";
    struct pixel {
        string ch;
        int color;
    };
    typedef vector<vector<pixel>> mat_t;
    mat_t main;
private:
    void init_main(int set_x = -1, int set_y = -1) {
        if (set_x < 1 && set_y < 1) getmaxyx(stdscr, set_y, set_x);
        cerr << set_x << "x" << set_y << endl;
    }
};
