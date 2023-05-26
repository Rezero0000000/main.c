#include <stdio.h>

void printAge(int *pAge) {
  printf("%d\n\n", *pAge);    // deference
}

void main () {
  /*
   * 
               Pointer = a "Variable-like" refrence that holds a memory address to another variable, array, etc.
              some tasks are performef more easily with pointers
              * = indirection operator (value at addres *he call it :v)

  */

  int age = 21;
  int *pAge = &age;

  printAge(pAge);
  
  printf ("Address of age: %p\n", &age);
  printf ("Address of pAge: %p\n\n", pAge);
  
  printf("size of age: %d bytes\n", sizeof(age));
  printf("size of pAge: %d bytes\n\n", sizeof(pAge));

  printf("value of age: %d\n", age);
  printf("value at stored address: %d\n\n", *pAge);   //Dereferencing
}
