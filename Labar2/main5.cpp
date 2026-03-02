#include <iostream>
#include "Stock.h"
using namespace std;

int main() {
    Stock stock;

    // Добавление коробок на склад
    stock.Add(10, 20);
    stock.Add(15, 30);
    stock.Add(5, 25);
    stock.Add(20, 15);

    // Тестирование GetByW
    cout << "A box with at least the carrying capacity 10: " << stock.GetByW(10) << endl; // Ожидается 0
    cout << "A box with at least the carrying capacity 15: " << stock.GetByW(15) << endl; // Ожидается 1
    cout << "A box with at least the carrying capacity 25: " << stock.GetByW(25) << endl; // Ожидается -1

    // Тестирование GetByV
    cout << "A box with a volume of at least 20: " << stock.GetByV(20) << endl; // Ожидается 0
    cout << "A box with a volume of at least 30: " << stock.GetByV(30) << endl; // Ожидается 1
    cout << "A box with a volume of at least 40: " << stock.GetByV(40) << endl; // Ожидается -1

    return 0;
}
