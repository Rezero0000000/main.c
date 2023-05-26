#include <stdio.h>
// swap value
#include <string.h>

// Random numbers
#include <time.h>
#include <stdlib.h>

void main () {
  // Random numbers
  printf("\n-------===== [ Random Numbers ] =====-------\n");
  srand(time(0));

  int number1 = (rand() % 20) + 1;
  int number2 = (rand() % 20) + 1;
  int number3 = (rand() % 20) + 1;
  
  printf("%d\n", number1);
  printf("%d\n", number2);
  printf("%d\n", number3);

  // Swab value
  printf("\n-------===== [ Random Numbers ] =====-------\n");
/*  
  char x = 'x';
  char y = 'y';
  char temp;
                            // for char
  temp = x;
  x = y;
  y = temp;
*/
 
  char x[12] = "Rei";
  char y[12] = "Rem";
  char temp[12];
                            // for string
  strcpy(temp, x);
  strcpy(x,y);
  strcpy(y, temp);

  printf("%s\n", x);
  printf("%s\n", y);
}
