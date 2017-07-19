#include "Tile.h"
using namespace std;

Tile::Tile(int row, int col, char x): row{row} col{col} occupied{x} {};

int Tile::getrow() {
 return row;
}

int Tile::getcol() {
 return col;
}

char Tile::getoriginal() {
 return original;
}

