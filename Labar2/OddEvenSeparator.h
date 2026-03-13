#ifndef ODDEVENSEPARATOR_H
#define ODDEVENSEPARATOR_H
using namespace std;
#include <vector>

class OddEvenSeparator {
    std::vector<int> numbers;
public:
    OddEvenSeparator();
    void add_number(int x);
    void even() const; // печатает чётные числа в порядке добавления
    void odd() const;  // печатает нечётные числа в порядке добавления

};

#endif // ODDEVENSEPARATOR_H
