#include <stdio.h>
#include <stdbool.h>

void main () {
  bool a = true;
  bool b = false;

  printf("\n------====== [ or ] =====------\n");
  printf("a || b = %s\n", (a || b) ? "true" : "false");
  printf("b || b = %s\n", (b || b) ? "true" : "false");
  printf("a || a = %s\n", (a || a) ? "true" : "false");

  printf("\n------====== [ and ] =====------\n");
  printf("a && b = %s\n", (a && b) ? "true" : "false");
  printf("b && b = %s\n", (b && b) ? "true" : "false");
  printf("a && a = %s\n", (a && a) ? "true" : "false");

  printf("\n------====== [ not ] =====------\n");
  printf("a != b = %s\n", (a != b) ? "true" : "false");
  printf("b != b = %s\n", (b != b) ? "true" : "false");
  printf("a != a = %s\n", (a != a) ? "true" : "false");

  printf("\n\nNote: \n\n[1]. a = true\n[2]. b = false\n");
}
