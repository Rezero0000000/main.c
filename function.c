#include <stdio.h>

int modulo (int a, int b); // Prototype

void helloWaifu (char name[], int order) {
  printf("Hello %s, you're %d waifu\n", name, order);
}

int calculate (int a, int b) {
  return a + b;
}

void main () {
  helloWaifu("Rem", 1);
  helloWaifu("Lain", 2);
  helloWaifu("Rei", 3);
  helloWaifu("Senjougahara", 4);

  printf("\n%d", calculate(1,2));
  printf("\n%d", modulo(5,2));
}

int modulo (int a, int b) {
  return a%b;
}
