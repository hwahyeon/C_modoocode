/* prefix, postfix  */
#include <stdio.h>
int main() {
  int a = 1;

  printf("++a : %d \n", ++a);

  a = 1;
  printf("a++ : %d \n", a++);
  printf("a : %d \n", a);

  return 0;
}

// Result
// ++a : 2 
// a++ : 1 
// a : 2 
