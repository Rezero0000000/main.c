#include <stdio.h>

void main () {
  // format specifier % = defines and formats a typ
  /*
      %c = character
      %s = string (array of characters)
      %f = float
      %lf = double
      %d = integer    
  */

  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 100.99;

  printf("Item 1: $%.2f\n", item1);
  printf("Item 2: $%.2f\n", item2);
  printf("Item 3: $%.2f\n", item3);
}
