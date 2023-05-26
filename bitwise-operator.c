#include <stdio.h>

void main () {
  /*
      & = AND
      | = OR
      ^ = XOR
      << left shift
      >> right shift
  */

  int x = 6;    //6  = 00000110
  int y = 12;   //12 = 00001100
  int z = 0;    //0  = 00000000
  
  z = x & y;
  printf("\nAND= %d\n",z);

  z = x | y;
  printf("\nOR = %d\n",z);

  z = x ^ y;
  printf("\nXOR = %d\n",z);

  z = x << y;
  printf("\nSHIFT LEFT = %d\n",z);

  z = x >> y;
  printf("\nRIGHT LEFT = %d\n",z);
}
