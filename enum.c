#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

void main () {
  enum Day today = Tue;

  if (today == 4) {
    printf("Happy Wednesday");
  }
}
