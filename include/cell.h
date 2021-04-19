#ifndef CELL_H
#define CELL_H
#include "raylib.h"
typedef struct Cell {
    Color color;
    bool selected;
    Cell(): color({0, 0, 0, 0}), selected(false)  {};
} Cell;

#endif // CELL_H
