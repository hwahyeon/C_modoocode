#include <stdio.h>

int main() {
  int a = 2147483647;
  printf("a : %d \n", a);

  a++;
  printf("a : %d \n", a);

  return 0;
}

// Result
// a : 2147483647 
// a : -2147483648 
