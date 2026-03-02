#include "OddEvenSeparator.h"
#include <iostream>
using namespace std;

OddEvenSeparator::OddEvenSeparator() {}

void OddEvenSeparator::add_number(int x) {
    numbers.push_back(x);
}

void OddEvenSeparator::even() const {
    bool first = true;
    for (int v : numbers) {
        if (v % 2 == 0) {
            if (!first) cout << " ";
            std::cout << v;
            first = false;
        }
    }
    cout << endl;
}

void OddEvenSeparator::odd() const {
    bool first = true;
    for (int v : numbers) {
        if (v % 2 != 0) {
            if (!first) cout << " ";
            cout << v;
            first = false;
        }
    }
    cout << endl;
}
