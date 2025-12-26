#ifndef canvas_h
#define canvas_h
#include <iostream>
using namespace std;

class canvas {
    public:
    char fill = 'x';
    char empt = ' ';
    int width = 20;
    int height = 20;
    public:
    canvas () {
        cout << fill << empt << endl;
        cout << "canvas rendered" << endl;
    }
    
};

#endif
