#ifndef TILE_H
#define TILE_H

class Tile {
 int row;
 int col;
 char original;

 public:
  Tile(int row, int col, char x);
  int getrow();
  int getcol();
  char getoriginal();
};

#endif
