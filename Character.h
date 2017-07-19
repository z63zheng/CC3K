#ifndef CHARACTER_H
#define CHARACTER_H
#include "Grid.h"
#include "Info.h"

class Character{
 int HP;
 int HPmax;
 int Atk;
 int Def;
 const string name;
 int row;
 int col;
 Grid *gp;
 
 public:
  Character(int HP, int HPmax, int Atk, int Def, string name, int row, int col, Grid *gp);
  virtual ~Character()=0;
  Info getInfo();
  void move(int row, int col);
  virtual void defend(Character *atkor, Character *dfdor, int atk, int def)=0;
};

#endif
