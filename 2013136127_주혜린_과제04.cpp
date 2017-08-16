#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int returnmax(int a, int b){//둘 중 더 큰 값을 반환하는 함수
	if(a>b)		return a;
	else if(a<b)	return b;
	else if(a==b)	return a;
}
void main ()
{
	int arr[5][5]={0};//삼각형 배열
	int i, j=0;//반복문을 위한 변수
	int k=1, l=1;//반복문을 위한 변수
	srand(time(NULL));//난수
	int sum[6][6]={0};//합을 저장할 배열
	int Max=0;//최대값

	for(i=0; i<5; i++){//삼각형 배열을 출력
		for(l=0; l<6-k; l++)
			printf(" ");
		for(j=0; j<k; j++){
			arr[i][j]=rand()%10;
			printf("%2d", arr[i][j]);
		}
		printf("\n");
		k++;
	}
	
	k=1;

	sum[0][0]=arr[0][0];//합을 삼각형 배열의 처음값으로 초기화

	for(i=0; i<5; i++){//합 배열에 합을 저장
		sum[i+1][0]=arr[i+1][0]+sum[i][0];
		for(j=0; j<k; j++){
			sum[i+1][j+1]=arr[i+1][j+1]+returnmax(sum[i][j], sum[i][j+1]);
		}
		k++;
	}

	for(j=0; j<5; j++){//최대값 비교
		if(Max<sum[4][j])
			Max=sum[4][j];
	}

	printf("Max = %d\n", Max);//최대값 출력

	system("pause");
}