#include "Table.h"
#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;

Table::Table(int rows, int cols) : rows_(rows), cols_(cols), data(rows, vector<int>(cols, 0)) {}

int Table::get_value(int row, int col) const {
    assert(row >= 0 && row < rows_ && col >= 0 && col < cols_);
    return data[row][col];
}

void Table::set_value(int row, int col, int value) {
    assert(row >= 0 && row < rows_ && col >= 0 && col < cols_);
    data[row][col] = value;
}

int Table::n_rows() const {
    return rows_;
}

int Table::n_cols() const {
    return cols_;
}

void Table::print() const {
    for (int i = 0; i < rows_; ++i) {
        for (int j = 0; j < cols_; ++j) {
            cout << data[i][j];
            if (j + 1 < cols_) cout << " ";
        }
        cout << endl;
    }
}

double Table::average() const {
    long long sum = 0;
    long long count = 0;
    for (int i = 0; i < rows_; ++i) {
        for (int j = 0; j < cols_; ++j) {
            sum += data[i][j];
            ++count;
        }
    }
    if (count == 0) return 0.0;
    return static_cast<double>(sum) / static_cast<double>(count);
}
