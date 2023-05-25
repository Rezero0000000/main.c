#include <stdio.h>
//#include <array.h>

void main () {
  int prices[] = {1,2,3,4};
  double tes[] = {2.0, 15.0, 13.0, 7.0};
  char waifus[][25] = {"Rem", "Senjougaha", "Lain", "Hanekawa", "2b"};

  for (int i = 0; i <= 3; i++){
    printf("%ld\n", prices[i]); 
  }
  
  printf("\n");

  for (int e = 0; e <= 3; e++){
    printf("$%.3lf\n", tes[e]);
  }

  float a = 1;
  float b = 2;

  printf("\n%.f + %.f = %.f\n\n",a,b,a+b);

  for(int i = 0; i < sizeof(waifus)/sizeof(waifus[0]); i++){
    printf("%s\n", waifus[i]);
  }

  printf("%d", sizeof(waifus)/25);
}
