#include <stdio.h>

void main () {
  // Write/append a file
  File *pF = fopen("./test.txt", "w");
  fprintf(pF, "Let's all love lain");

  fclose(pF);

  // Delete a file
/*
  if (remove("./test.txt") == 0) {
    printf("That file was deleted successfully !");
  }
  else {
    printf("That file was NOT deleted!");
  }
*/
}
