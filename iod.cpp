#include <iostream>
#include "canvas.h"
using namespace std;
int main () {
    canvas can1;
    cout << "\033[2J";
    can1.rect(3,3,3,3);
    can1.rect(14,3,3,3);
    can1.rect(9,9,2,2);
    can1.rect(3,14,14,3);
    can1.draw();
    return 0;
}
