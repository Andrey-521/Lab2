#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    // Создание комплексных чисел
    Complex c1(3.0, 4.0); // 3 + 4i
    Complex c2(1.0, 2.0); // 1 + 2i

    // Демонстрация методов
    cout << "Complex number c1: ";
    c1.Print();

    cout << "Complex number c2: ";
    c2.Print();

    cout << "Module c1: " << c1.Abs() << std::endl;
    cout << "Argument c1: " << c1.Arg() << std::endl;

    cout << "Trigonometric form c1: ";
    c1.TrigPrint();

    cout << "Demonstrative form c1: ";
    c1.ExpPrint();

    // Операции с комплексными числами
    Complex sum = c1.Add(c2);
    cout << "Sum c1 and c2: ";
    sum.Print();

    Complex diff = c1.Sub(c2);
    cout << "Difference c1 and c2: ";
    diff.Print();

    Complex prod = c1.Mult(c2);
    cout << "Work c1 and c2: ";
    prod.Print();

    Complex quot = c1.Div(c2);
    cout << "Private c1 and c2: ";
    quot.Print();

    return 0;
}
