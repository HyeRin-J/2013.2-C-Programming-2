#include <stdio.h>

struct student{
   char name[10];
   double avg;
} s[10];

void main(void) {

   int N;
   int i, j;
   struct student t;

   printf("�� ���� ������ �Է��Ͻðڽ��ϱ�?");
   scanf("%d",&N);//�Է��� �л��� ����

   printf("�̸�, ��� ������ �Է����ּ���\n");

   for(i=0;i<N;i++) {//�л�����ŭ �ݺ�
      scanf("%s",s[i].name);
      scanf("%lf",&s[i].avg);
   }

    for(i=0;i<N-1;i++)//����� ���ϸ� ����
      for(j=i+1;j<N;j++)
         if(s[i].avg < s[j].avg) {
            t = s[i];
            s[i] = s[j];
            s[j] = t;
         }

   printf("��տ� ���� ���ĵ� %d���� ������ ������ �����ϴ�.\n\n", N);
   printf("%10s%10s\n","�̸�", "���");

   for(i=0;i<N;i++)//���ʴ�� ���
      printf("%10s%10.1f\n",s[i].name,s[i].avg);

   getchar();
   getchar();
}