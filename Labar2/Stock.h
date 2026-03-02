#ifndef STOCK_H
#define STOCK_H

#include <vector>

class Box {
public:
    int weight; // Грузоподъемность
    int volume; // Объем
    int id;     // Серийный номер

    Box(int w, int v, int identifier);
};

class Stock {
private:
    std::vector<Box> boxes; // Вектор для хранения коробок
    int next_id;            // Следующий серийный номер

public:
    Stock();
    void Add(int w, int v);
    int GetByW(int min_w);
    int GetByV(int min_v);
};

#endif // STOCK_H
