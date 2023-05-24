#include <stdio.h>
#include <string.h>

void main () {
  char name[25];
  int age;

  printf("What your name? : ");
  //scanf("%s", &name);
  fgets(name, 25, stdin); // if you want get whitespace to
  name[strlen(name)-1] = '\0';

  printf("How old are you ?: ");
  scanf("%d", &age);
  
  printf("\nHello, %s\n", name);
  printf("You are %d years old\n", age);

}
