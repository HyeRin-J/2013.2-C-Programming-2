#include <stdio.h>

void main (void)
{
	char a[]="C programing";
	char *pa=&a;
	int i;

	//원래 문자열 출력
	printf("%s", pa);

	printf("\n");

	//포인터를 이용하여 문자열을 역순으로 출력
	for(i=11; i>=0; i--)
	{
		printf("%c", pa[i]);
	}

	getchar();
	getchar();
}