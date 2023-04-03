/* 변수 알아보기 2*/
#include <stdio.h>
int main() {
  int a;
  a = 127;
  printf("a 의 값은 %d 진수로 %o 입니다. \n", 8, a);
  printf("a 의 값은 %d 진수로 %d 입니다. \n", 10, a);
  printf("a 의 값은 %d 진수로 %x 입니다. \n", 16, a);
  return 0;
}

// Result
// a 의 값은 8 진수로 177 입니다. 
// a 의 값은 10 진수로 127 입니다. 
// a 의 값은 16 진수로 7f 입니다. 
