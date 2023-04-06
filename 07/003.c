/* break! */
#include <stdio.h>
int main() {
  int usranswer;

  printf("컴퓨터가 생각한 숫자를 맞추어 보세요! \n");

  for (;;) {
    scanf("%d", &usranswer);
    if (usranswer == 3) {
      printf("맞추셨군요! \n");
      break;
    } else {
      printf("틀렸어요! \n");
    }
  }

  return 0;
}

// Result
// 컴퓨터가 생각한 숫자를 맞추어 보세요! 
// 5
// 틀렸어요! 
// 6
// 틀렸어요! 
// 7
// 틀렸어요! 
// 8
// 틀렸어요! 
// 3
// 맞추셨군요! 
