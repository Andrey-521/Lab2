#include <iostream>
#include <cmath>
#include "Complex.h"
using namespace std;

// Конструктор по умолчанию
Complex::Complex() : re(0.0), im(0.0) {}

// Конструктор с параметрами
Complex::Complex(double x, double y) : re(x), im(y) {}

// Методы доступа
double Complex::getRe() const {
    return re;
}

double Complex::getIm() const {
    return im;
}

void Complex::setRe(double x) {
    re = x;
}

void Complex::setIm(double y) {
    im = y;
}

// Модуль комплексного числа
double Complex::Abs() const {
    return sqrt(re * re + im * im);
}

// Аргумент комплексного числа
double Complex::Arg() const {
    if (re == 0.0 && im == 0.0) {
        return 0.0;
    }
    return atan2(re,im);
}

// Вывод в стандартной форме
void Complex::Print() const {
    if (im >= 0) {
        cout << re << " + i * " << im << endl;
    }
    else {
        cout << re << " - i * " << im << endl;
    }
}

// Вывод в тригонометрической форме
void Complex::TrigPrint() const {
    double rho = Abs();
    double phi = Arg();

    if (rho == 0.0) {
        cout << "0";
        return;
    }
    cout << rho << "*(cos " << phi << "+ i * sin " << phi << ")";
}

// Вывод в показательной форме
void Complex::ExpPrint() const {
    double rho = Abs();
    double phi = Arg();

    if (rho == 0.0) {
        cout << "0";
        return;
    }
    cout << rho << "*e^(i*" << phi << ")";
}

// Сложение комплексных чисел
Complex Complex::Add(const Complex& z) const {
    return Complex(re + z.re, im + z.im);
}

// Вычитание комплексных чисел
Complex Complex::Sub(const Complex& z) const {
    return Complex(re - z.re, im - z.im);
}

// Умножение комплексных чисел
Complex Complex::Mult(const Complex& z) const {
    double NewRe = re * z.re - im * z.im;
    double NewIm = re * z.im + im * z.re;
    return Complex(NewRe, NewIm);
}

// Деление комплексных чисел
Complex Complex::Div(const Complex& z) const {
    if (z.re == 0.0 && z.im == 0.0) {
        cout << "Division by zero error" << endl;
        return Complex(0.0,0.0);
    }
    double denominator = z.re * z.re + z.im * z.im;     //Знаменатель
    double NewRe = (re * z.re + im * z.im) / denominator;
    double NewIm = (im * z.re - re * z.im) / denominator;
    return Complex(NewRe, NewIm);
}
