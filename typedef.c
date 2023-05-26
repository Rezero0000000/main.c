#include <stdio.h>

typedef char weeb[25];
typedef struct {
  char name[25];
  int hp;
  int mp;
} Player;

void main () {
  weeb tes = "Hikari";
  printf("%s\n", tes);

  Player Rei = {"Rei", 10, 7};
  printf("\nName: %s\nHp: %d\nMp: %d\n",Rei.name, Rei.hp, Rei.mp);
}
