#include <stdio.h> 
#include <stdlib.h>

typedef struct{//����ü ����
	char name[10];
	int Ko;
	int Ma;
	int En;
	int sum;
	float average;
	int rank;
}student;

void main() 
{ 
	student student[5];
	int i, j=0;

	for(i=0; i<5; i++){//���� ������ �Է¹���
		printf("�̸�>");
		scanf("%s", &student[i].name);
		printf("����>");
		scanf("%d", &student[i].Ko);
		printf("����>");
		scanf("%d", &student[i].Ma);
		printf("����>");
		scanf("%d", &student[i].En);
		printf("\n");
	}

	for(i=0; i<5; i++){//�հ�� ����� ����
		student[i].sum=student[i].Ko+student[i].Ma+student[i].En;
		student[i].average=(double)student[i].sum/3;
	}

	for(i = 0; i<5; ++i){//���� �ű�
		student[i].rank=1;
		for(j=0; j<5 ; ++j){
			if(student[i].average < student[j].average) 
				student[i].rank++;
		}
	}

	printf("\n\n�̸�\t����\t����\t����\t����\t���\t���\n");

	for(i=1; i<6; i++){//������� ����
		for(j=0; j<5; j++){
			if(student[j].rank==i){
				printf("%s\t%d\t%d\t%d\t%d\t%.3f\t%d\n",student[j].name, student[j].Ko, student[j].Ma, student[j].En, student[j].sum, student[j].average, student[j].rank);
			}
		}
	}

	system("pause");
}   