/* 구구단 */
#include <stdio.h>
int main() {
  int i, j;

  for (i = 1; i < 10; i++) {
    for (j = 1; j < 10; j++) {
      printf(" %d x %d = %d \n", i, j, i * j);
    }
  }

  return 0;
}

// Result
// .... (생략) ...
//  9 x 5 = 45 
//  9 x 6 = 54 
//  9 x 7 = 63 
//  9 x 8 = 72 
//  9 x 9 = 81 
