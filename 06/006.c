/* if 와 if- else if 의 차이*/
#include <stdio.h>
int main() {
  int num;

  printf("아무 숫자나 입력해 보세요 : ");
  scanf("%d", &num);

  if (num == 7) {
    printf("a 행운의 숫자 7 이군요!\n");
  } else if (num == 7) {
    printf("b 행운의 숫자 7 이군요! \n");
  }

  // 비교
  if (num == 7) {
    printf("c 행운의 숫자 7 이군요!\n");
  }
  if (num == 7) {
    printf("d 행운의 숫자 7 이군요! \n");
  }

  return 0;
}

// Result
// 아무 숫자나 입력해 보세요 : 7
// a 행운의 숫자 7 이군요!
// c 행운의 숫자 7 이군요!
// d 행운의 숫자 7 이군요!
