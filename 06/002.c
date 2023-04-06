/* 나눗셈 예제 */
#include <stdio.h>
int main() {
  double i, j;
  printf("나누고 싶은 두 정수를 입력하세요 : ");
  scanf("%lf %lf", &i, &j);

  printf("%f 를 %f 로 나눈 결과는 : %f \n", i, j, i / j);

  return 0;
}

// Result
// 나누고 싶은 두 정수를 입력하세요 : 10
// 3
// 10.000000 를 3.000000 로 나눈 결과는 : 3.333333 
