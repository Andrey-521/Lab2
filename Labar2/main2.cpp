#include <iostream>
#include "OddEvenSeparator.h"
using namespace std;

int main() {
    // Демонстрация OddEvenSeparator
    OddEvenSeparator sep;
    sep.add_number(5);
    sep.add_number(2);
    sep.add_number(7);
    sep.add_number(4);
    sep.add_number(2);
    
    cout << "Even: ";
    sep.even(); // 2 4 2
    
    cout << "Odd: ";
    sep.odd();  // 5 7

    return 0;
}
