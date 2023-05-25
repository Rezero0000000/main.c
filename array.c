#include <stdio.h>

void main () {
  int numbers[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};    // 2d Array
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

  for (int i = 0; i < sizeof(waifus)/sizeof(waifus[0]); i++){
    printf("%s\n", waifus[i]);
  }

  printf("\n");
  
  for (int a = 0; a < sizeof(numbers)/sizeof(numbers[0]); a++) {
    for (int b = 0; b < sizeof(numbers[0])/sizeof(numbers[0][0]); b++){
      printf("%d",numbers[a][b]);    
    }
    printf("\n");
  }
}
