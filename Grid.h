#ifndef GRID_H
#define GRID_H
#include "Tile.h"
#include "Passable.h"
#include "Subject.h"

class Grid {
 vector<vector<Tile *>> theGrid;
 vector<Potion *> potions;
 int score;
 vector<vector<Tile *>> rooms;
 vector<Treasure *> treasures;
 
 public:
  Grid();
  ~Grid();
  void notify(Subject who);
  void display();
  void showScore();
};
