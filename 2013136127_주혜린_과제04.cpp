#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int returnmax(int a, int b){//�� �� �� ū ���� ��ȯ�ϴ� �Լ�
	if(a>b)		return a;
	else if(a<b)	return b;
	else if(a==b)	return a;
}
void main ()
{
	int arr[5][5]={0};//�ﰢ�� �迭
	int i, j=0;//�ݺ����� ���� ����
	int k=1, l=1;//�ݺ����� ���� ����
	srand(time(NULL));//����
	int sum[6][6]={0};//���� ������ �迭
	int Max=0;//�ִ밪

	for(i=0; i<5; i++){//�ﰢ�� �迭�� ���
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

	sum[0][0]=arr[0][0];//���� �ﰢ�� �迭�� ó�������� �ʱ�ȭ

	for(i=0; i<5; i++){//�� �迭�� ���� ����
		sum[i+1][0]=arr[i+1][0]+sum[i][0];
		for(j=0; j<k; j++){
			sum[i+1][j+1]=arr[i+1][j+1]+returnmax(sum[i][j], sum[i][j+1]);
		}
		k++;
	}

	for(j=0; j<5; j++){//�ִ밪 ��
		if(Max<sum[4][j])
			Max=sum[4][j];
	}

	printf("Max = %d\n", Max);//�ִ밪 ���

	system("pause");
}