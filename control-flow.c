#include <stdio.h>
#include <string.h>

void main () {
  char name[25];
  int age;
  char grade;

  printf("What is your name ? : ");
  fgets(name, 25, stdin);
  name[strlen(name)-1] = '\0';
  
  printf("and how old are you ?: ");
  scanf("%d", &age);

  if (age <= 12){
    printf("\nSorry %s go to your mother please!\n", name);
  } else if (age <= 18 && age > 12) {
    printf("\nSmp huh? not bad %s\n", name);
  } else if (age > 18 && age <= 25) {
    printf("\nMoshi Moshi %s onee-san\n", name);
  } else if (age > 25 && age <= 35) {
    printf("\nHello %s Mommy\n", name);
  }
  else {
    printf("\nI'm sorry, but are you a human %s ?\n", name);
  }

  printf("Tell me your grade please : ");
  scanf("%c", &grade);
  switch(grade) {
    case 'A':
      printf("Good\n");
      break;
    case 'B':
      printf("Not bad\n");
      break;
    case 'C':
      printf("Waduh\n");
      break;
    default:
      printf("Wrong input sir...\n");
  }
}
