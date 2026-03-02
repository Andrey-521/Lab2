#include <iostream>
#include "Table.h"
using namespace std;

int main() {
    // Демонстрация Table
    Table t(3, 4); // 3 строки, 4 столбца, все элементы равны 0
    t.set_value(0, 0, 10);
    t.set_value(1, 2, 5);
    t.set_value(2, 3, 7);

    cout << "Table:" << endl;
    t.print();

    cout << "Average: " << t.average() << endl;

    return 0;
}
