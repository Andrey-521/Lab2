#include "Bell.h"
#include <iostream>
using namespace std;
Bell::Bell() : nextIsDing(true) {}

void Bell::sound() {
    if (nextIsDing) {
        cout << "ding" << endl;
    } else {
        cout << "dong" << endl;
    }
    nextIsDing = !nextIsDing;
}
