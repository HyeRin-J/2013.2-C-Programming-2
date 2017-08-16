#include <stdio.h>

struct student{
   char name[10];
   double avg;
} s[10];

void main(void) {

   int N;
   int i;

   printf("몇 명의 정보를 입력하시겠습니까?");
   scanf("%d",&N);//입력할 학생의 숫자

   printf("이름, 평균 순으로 입력해주세요\n");

   for(i=0;i<N;i++) {//학생수만큼 반복
      scanf("%s",s[i].name);
      scanf("%lf",&s[i].avg);
   }

   printf("입력받은 정보를 출력합니다.\n");

   for(i=0; i<N; i++){
	   printf("%s %3f\n", s[i].name, s[i].avg);
   }

   getchar();
   getchar();
}