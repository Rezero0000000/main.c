#include <stdio.h>
#include <string.h>

struct Player {
  char name[12];
  int hp;
  int mp;
};

void main () {
  struct Player Rei;
  strcpy(Rei.name, "Rei");
  Rei.hp = 12;
  
  printf("%s\n", Rei.name);
  printf("%d", Rei.hp);
}
