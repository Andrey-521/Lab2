#include "Stock.h"

Box::Box(int w, int v, int identifier) : weight(w), volume(v), id(identifier) {}

Stock::Stock() : next_id(0) {}

void Stock::Add(int w, int v) {
    boxes.emplace_back(w, v, next_id++);
}

int Stock::GetByW(int min_w) {
    for (const auto& box : boxes) {
        if (box.weight >= min_w) {
            return box.id; // Возвращаем серийный номер первой подходящей коробки
        }
    }
    return -1; // Если подходящих коробок нет
}

int Stock::GetByV(int min_v) {
    for (const auto& box : boxes) {
        if (box.volume >= min_v) {
            return box.id; // Возвращаем серийный номер первой подходящей коробки
        }
    }
    return -1; // Если подходящих коробок нет
}
