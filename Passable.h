#ifndef PASSABLE_H
#define PASSABLE_H
#include "Tile.h"

class Passable: public Tile {
 char display;
 
 public:
  Passable(int row, int col, char x);
  void occupy(char x);
  void unoccupied();
};

#endif
