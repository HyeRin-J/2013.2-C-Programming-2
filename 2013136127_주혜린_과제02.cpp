#include <stdio.h>

void printhistogram(int arr1[],int max);

void main(){
	int num, i=0;
	int arr[30]={0};
	int max=0;

	printf(" ");

	for(i=0; i<30; i++){//���ڸ� �Է¹���
		scanf("%d", &num);
		if(num==0) break;//0�� �Է¹����� ����
		arr[i]=num;
	}
	printf("==============================================================\n");

	max=arr[0];

	for(i=0; i<30; i++){//�ְ��� ����
		if(arr[i]>max){
			max=arr[i];
		}
	}

	printhistogram(arr, max);//������׷� ���

	printf("\n");
	printf("==============================================================\n");

	getchar();
	getchar();
}

void printhistogram(int arr1[],int max){//������׷��� ����ϴ� �Լ�
	int i, j=0;
	int k=max;
	int arr2[30]={0};

	for(i=0; i<30; i++){//arr2[i]�� arr1[i]�� ����
		arr2[i]=arr1[i];
	}

	for(j=0; j<k; j++){//k=max�̹Ƿ� �ְ������� ����
		for(i=0; i<30; i++){//i�� 30���� ����
			if(arr1[i]==0) break;//arr1[i]�� 0�̸� ����
			else if(arr1[i]==max){//arr1[i]==max�̸� *���
				printf(" *");
				arr1[i]--;//arr1[i]�� ����
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
		max--;//max �� ����
	}

	for(i=0; i<30; i++){//���� �Է� ���� ���� ���
		if(arr2[i]==0) break;
		printf(" %d", arr2[i]);
	}
}