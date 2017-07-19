#include "Character.h"
#include "Info.h"

Character::Character(int HP, int HPmax, int Atk, int Def, string name, int row, int col, Grid *gp):
 HP{HP}, HPmax{HPmax}, Atk{Atk}, Def{Def}, name{name}, row{row}, col{col}, gp{gp} {}

Character::~Character() {}

Info getInfo() {
 struct Info info {HP, Atk, Def, name, row, col};
 return info;
}

void move(int row, int col) {
 this->row = row;
 this->col = col;
}
