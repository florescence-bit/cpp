#ifndef canvas_h
#define canvas_h
#include <iostream>
using namespace std;

class canvas {
    public:
    char fill = 'm';
    char empt = ' ';
    int width = 20;
    int height = 20;
    int frame [20][20];
    public:
    canvas () {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++)
	        cout << fill << fill;
	    cout << endl;
	}
    }
};

#endif
