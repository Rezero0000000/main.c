#include <stdio.h>
#include <string.h>

void main () {
  char string1[] = "Rei";
  char string2[] = "kun";
  
  // strlwr(string1);                          // converts a string to lowercase
  // strupr(string1);                          // converts a string to uppercase
  // strcat(string1, string2);                 // appends string2 to end of string1
  // strncat(string1, string2, 1);             // appends n characters from string2 to string1
  // strncpy(string1, string2, 2);             // copy n characters of string2 to string1
  
  // strset(string1, '?');        // Sets all characters of a string to a given characters
  // strnset(string1, 'x', 1);    // Sets first n characters of a string to a given characters
  // strrev(string1);             // Reverse a string

  printf("%s", string1);
}
