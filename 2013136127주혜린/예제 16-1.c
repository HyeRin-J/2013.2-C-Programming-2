#include <stdio.h>

struct student{
   char name[10];
   double avg;
} s[10];

void main(void) {

   int N;
   int i;

   printf("�� ���� ������ �Է��Ͻðڽ��ϱ�?");
   scanf("%d",&N);//�Է��� �л��� ����

   printf("�̸�, ��� ������ �Է����ּ���\n");

   for(i=0;i<N;i++) {//�л�����ŭ �ݺ�
      scanf("%s",s[i].name);
      scanf("%lf",&s[i].avg);
   }

   printf("�Է¹��� ������ ����մϴ�.\n");

   for(i=0; i<N; i++){
	   printf("%s %3f\n", s[i].name, s[i].avg);
   }

   getchar();
   getchar();
}