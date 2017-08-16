#include <stdio.h>

void printhistogram(int arr1[],int max);

void main(){
	int num, i=0;
	int arr[30]={0};
	int max=0;

	printf(" ");

	for(i=0; i<30; i++){//숫자를 입력받음
		scanf("%d", &num);
		if(num==0) break;//0을 입력받으면 정지
		arr[i]=num;
	}
	printf("==============================================================\n");

	max=arr[0];

	for(i=0; i<30; i++){//최고값을 저장
		if(arr[i]>max){
			max=arr[i];
		}
	}

	printhistogram(arr, max);//히스토그램 출력

	printf("\n");
	printf("==============================================================\n");

	getchar();
	getchar();
}

void printhistogram(int arr1[],int max){//히스토그램을 출력하는 함수
	int i, j=0;
	int k=max;
	int arr2[30]={0};

	for(i=0; i<30; i++){//arr2[i]에 arr1[i]값 저장
		arr2[i]=arr1[i];
	}

	for(j=0; j<k; j++){//k=max이므로 최고값까지만 루프
		for(i=0; i<30; i++){//i는 30까지 루프
			if(arr1[i]==0) break;//arr1[i]가 0이면 정지
			else if(arr1[i]==max){//arr1[i]==max이면 *출력
				printf(" *");
				arr1[i]--;//arr1[i]값 감소
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
		max--;//max 값 감소
	}

	for(i=0; i<30; i++){//원래 입력 받은 숫자 출력
		if(arr2[i]==0) break;
		printf(" %d", arr2[i]);
	}
}