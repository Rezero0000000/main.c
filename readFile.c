#include <stdio.h>

void main () {
  FILE *pF = fopen("./poem.txt", "r");
  char buffer[255];

  if (pF == NULL ) {
    printf("unable to open file!\n");
  }
  else {
    while (fgets(buffer, 255, pF)) {
      printf("%s", buffer);
    }
  }

  fclose(pF);
}
