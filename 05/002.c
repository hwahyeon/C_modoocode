/* 섭씨온도를 화씨로 바꾸기  */
#include <stdio.h>
int main() {
  double celsius;  // 섭씨 온도

  printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
  printf("섭씨 온도를 입력해 주세요 : ");
  scanf("%lf", &celsius);  // 섭씨 온도를 입력 받는다.

  printf("섭씨 %f 도는 화씨로 %f 도 입니다 \n", celsius, 9 * celsius / 5 + 32);

  return 0;
}

// Result
// 섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. 
// 섭씨 온도를 입력해 주세요 : 섭씨 0.000000 도는 화씨로 32.000000 도 입니다 
