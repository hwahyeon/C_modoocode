#include <stdio.h>
int main() {
  float ave_score;
  float math, english, science, programming;

  printf("수학, 영어, 과학, 컴퓨터 프로그래밍 점수를 각각 입력해 주세요 ! : ");
  scanf("%f %f %f %f", &math, &english, &science, &programming);

  ave_score =
      (math + english + science + programming) / 4;  // 4 과목의 평균을 구한다.
  printf("당신의 평균 점수는 %f 입니다 \n", ave_score);
  if (ave_score >= 90) {
    printf("당신은 우등생 입니다. ");
  } else if (ave_score >= 40) {
    printf("조금만 노력하세요!. \n");
  } else {
    printf("공부를 발로 합니까? \n");
  }

  return 0;
}

// Result
// 수학, 영어, 과학, 컴퓨터 프로그래밍 점수를 각각 입력해 주세요 ! : 100
// 90
// 90
// 85
// 당신의 평균 점수는 91.250000 입니다 
// 당신은 우등생 입니다. 
