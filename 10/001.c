/* 무시 */
#include <stdio.h>
int main() {
  int a;
  double b;

  b = 2.4;
  a = b;

  printf("%d", a);
  return 0;
}

// Result
// 2
// : warning C4244: ‘=‘ : conversion from ‘double’ to ‘int’, possible loss of data
