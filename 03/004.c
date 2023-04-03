/* printf 형식 */
#include <stdio.h>
int main() {
  float a = 3.141592f;
  double b = 3.141592;
  int c = 123;
  printf("a : %.2f \n", a);
  printf("c : %5d \n", c);
  printf("b : %6.3f \n", b);
  return 0;
}

// Result
// a : 3.14 
// c :   123 
// b :  3.142 
