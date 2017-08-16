#include <stdio.h>

struct student{
   char name[10];
   double avg;
} s[10];

void main(void) {

   int N;
   int i, j;
   struct student t;

   printf("몇 명의 정보를 입력하시겠습니까?");
   scanf("%d",&N);//입력할 학생의 숫자

   printf("이름, 평균 순으로 입력해주세요\n");

   for(i=0;i<N;i++) {//학생수만큼 반복
      scanf("%s",s[i].name);
      scanf("%lf",&s[i].avg);
   }

    for(i=0;i<N-1;i++)//평균을 비교하며 정렬
      for(j=i+1;j<N;j++)
         if(s[i].avg < s[j].avg) {
            t = s[i];
            s[i] = s[j];
            s[j] = t;
         }

   printf("평균에 따라 정렬된 %d명의 정보는 다음과 같습니다.\n\n", N);
   printf("%10s%10s\n","이름", "평균");

   for(i=0;i<N;i++)//차례대로 출력
      printf("%10s%10.1f\n",s[i].name,s[i].avg);

   getchar();
   getchar();
}