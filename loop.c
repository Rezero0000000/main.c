#include <stdio.h>
#include <string.h>

void main () {
  char name[25];
  char waifu[] = "Rem";

  //for 
  for (int i = 0; i <= strlen(waifu); i++){
    printf("%c\n", waifu[i]);
  }

  // While 
  printf("What is your name ? : ");
  fgets(name, 25,stdin);
  name[strlen(name)-1] = '\0';

  while (strlen(name) == 0) {
    printf("What is your name ? : ");
    fgets(name, 25,stdin);
    name[strlen(name)-1] = '\0';
  }

  printf("%s\n\n", name);

  // Nested Loop
  for (int i = 0; i <= 5; i++){
    printf("*");
    for (int a = 0; a < i; a++ ){
      printf("*");
    }
    printf("\n");
  }
}
