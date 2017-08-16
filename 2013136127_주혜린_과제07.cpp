#include <stdio.h> 
#include <stdlib.h>

typedef struct{//구조체 선언
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

	for(i=0; i<5; i++){//각각 정보를 입력받음
		printf("이름>");
		scanf("%s", &student[i].name);
		printf("국어>");
		scanf("%d", &student[i].Ko);
		printf("수학>");
		scanf("%d", &student[i].Ma);
		printf("영어>");
		scanf("%d", &student[i].En);
		printf("\n");
	}

	for(i=0; i<5; i++){//합계와 평균을 구함
		student[i].sum=student[i].Ko+student[i].Ma+student[i].En;
		student[i].average=(double)student[i].sum/3;
	}

	for(i = 0; i<5; ++i){//순위 매김
		student[i].rank=1;
		for(j=0; j<5 ; ++j){
			if(student[i].average < student[j].average) 
				student[i].rank++;
		}
	}

	printf("\n\n이름\t국어\t수학\t영어\t총점\t평균\t등수\n");

	for(i=1; i<6; i++){//순위대로 정렬
		for(j=0; j<5; j++){
			if(student[j].rank==i){
				printf("%s\t%d\t%d\t%d\t%d\t%.3f\t%d\n",student[j].name, student[j].Ko, student[j].Ma, student[j].En, student[j].sum, student[j].average, student[j].rank);
			}
		}
	}

	system("pause");
}   