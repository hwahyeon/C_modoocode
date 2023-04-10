/* 두 수의 비율 */
#include <stdio.h>
int main() {
  int a, b;
  float c, d;

  printf("두 숫자 입력 : ");
  scanf("%d %d", &a, &b);

  c = a / b;
  d = (float)a / b;

  printf("두 수의 비율 : %f %f", c, d);

  return 0;
}

// Result
// 두 숫자 입력 : 5 3
// 두 수의 비율 : 1.000000 1.666667
