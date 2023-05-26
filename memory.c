#include <stdio.h>

void main () {
  /*
  
      Memory = an array of bytes within RAM (street)
      Memory block = a single unit (byte) within memory (house), 
                     used to hold some value ([erson])
      Memory address = the address of where a memory block is located (House address)
  */

  char a;
  char b[1];

  printf("%d bytes\n", sizeof(a));
  printf("%d bytes\n\n", sizeof(b));

  printf("%p\n", &a);
  printf("%p\n\n", &b);
}
