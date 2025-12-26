#ifndef canvas_h
#define canvas_h
#include <iostream>
using namespace std;

class canvas {
    public:
    int width = 20;
    int height = 20;
    int frame [20][20];
    public:
    canvas () {
	fill();	
    }
    public:
    void clear () {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++)
		frame[y][x] = 0;
	}
    }
    void fill () {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++)
		frame[y][x] = 1;
	}
    }
    public:
    void draw () {
	for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++)
		if(frame[y][x])
	        cout << "MM";
	        else cout << "  ";
	    cout << endl;
	}
    }
    public:
    void rect (int X, int Y, int W, int H) {
        for(int y = Y; y < Y + H; y++) {
	    for(int x = X; x < X + W; x++)
		frame[y][x] = 0;
	}
    }
};

#endif
