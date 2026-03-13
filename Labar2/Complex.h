#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
    double re; // Действительная часть
    double im; // Мнимая часть
public:
    Complex(); // Конструктор по умолчанию
    Complex(double x, double y); // Конструктор с параметрами

    // Методы доступа
    double getRe() const;
    double getIm() const;
    void setRe(double x);
    void setIm(double y);

    // Методы для работы с комплексными числами
    double Abs() const; // Модуль
    double Arg() const; // Аргумент
    void Print() const; // Стандартная форма
    void TrigPrint() const; // Тригонометрическая форма
    void ExpPrint() const; // Показательная форма

    // Операции с комплексными числами
    Complex Add(const Complex& z) const;
    Complex Sub(const Complex& z) const;
    Complex Mult(const Complex& z) const;
    Complex Div(const Complex& z) const;
};

#endif // COMPLEX_H
