#ifndef TABLE_H
#define TABLE_H

#include <vector>

class Table {
private:
    int rows_;
    int cols_;
    std::vector<std::vector<int>> data;
public:
    Table(int rows, int cols);
    int get_value(int row, int col) const;
    void set_value(int row, int col, int value);
    int n_rows() const;
    int n_cols() const;
    void print() const;      // выводит всю таблицу
    double average() const;  // среднее арифметическое всех значений

};

#endif // TABLE_H
