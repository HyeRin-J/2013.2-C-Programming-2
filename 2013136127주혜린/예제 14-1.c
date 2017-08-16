#include <stdio.h>

void nsum(int num[], int *p){
	int i;

	for(i=0; i<5; i++){
		*p+=num[i];
	}
}

void main (){
	int num[5]={10, 11, 12, 13, 14};
	int sum=0;
	int *p=&sum;

	nsum(num, p);

	printf("%d", sum);

	getchar();
}

