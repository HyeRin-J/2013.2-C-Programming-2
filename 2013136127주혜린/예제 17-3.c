#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[10];
	int kor;
	int eng;
	int math;
};
void main(void)
{

	FILE *fp;
	int count = 0;
	struct student stu[3];
	char filename[20]="grade.txt";
	int ntot;
	int avg;
	char grade;

	puts("3���� �����Է�:\n");

	for(count = 0;count <3; count ++)
	{
		printf("======%d��° �Է� =======", count+1);//�� �л��� ���� �Է¹���
		puts(" \n�̸� :" ); scanf("%s",&stu[count].name);
		puts(" \n���� :" ); scanf("%d",&stu[count].kor);
		puts(" \n���� :" ); scanf("%d",&stu[count].eng);
		puts(" \n���� :" ); scanf("%d",&stu[count].math);

	}

	if((fp=fopen(filename,"w")) ==NULL)
	{
		fprintf(stderr,"Error opening file %s.", filename);
		exit(1);
	}

	//���Ͽ� �Է�
	fprintf(fp,"%s ","=========================================================\n");
	fprintf(fp,"%s ","�̸�    ����    ����   ����   ����   ���   ���\n");
	fprintf(fp,"%s ","=========================================================\n");
	
	for(count  = 0; count<3; count++)
	{
		fprintf(fp,"%s\t ", stu[count].name);
		fprintf(fp,"%d\t ", stu[count].kor);
		fprintf(fp,"%d\t ", stu[count].eng);
		fprintf(fp,"%d\t ", stu[count].math);
		ntot = stu[count].kor + stu[count].eng + stu[count].math;
		avg = ntot/3;

		if(avg >= 90){//���
			grade = 'A';
		}
		else if(avg >=80){
			grade = 'B';
		}
		else if(avg >=70){
			grade = 'C';
		}
		else {
			grade = 'F';
		}

		fprintf(fp,"%d \t", ntot);
		fprintf(fp,"%d \t", avg);
		fprintf(fp,"%c \n", grade);

	}
	fclose(fp);

	getchar();
}