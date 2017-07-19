#include "Passable.h"
#include "Tile.h"
using namespace std;

Passable::Passable(int row, int col, char x): Tile{row, col, x}, display{x} {}

void Passable::occupy(char x) {
 display = x;
}

void Passable::unoccupy() {
 display = this->getoriginal();
}
 
