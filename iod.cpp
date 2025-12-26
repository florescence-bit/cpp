#include <iostream>
#include <thread>
#include <chrono>
#include "canvas.h"
using namespace std;

int i = 0;
int dir = 1; // direction (1 = right, -1 = left)

void loop() {
    
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    cout << "\033[H\033[2J"; // clear

    canvas can1;

    can1.rect(i+3,  3, 3, 3);
    can1.rect(i+14, 3, 3, 3);
    can1.rect(i+9,  9, 2, 2);
    can1.rect(i+3,  14, 14, 3);

    can1.draw();

    // update movement
    i += dir;
    if(i >= 3 || i <= -3)    // bounce
        dir = -dir;
}

int main () {
    cout << "\033[?1049h";
    while(true) {
        loop();
    }
    cout << "\033[?1049l"; 
    return 0;
}
