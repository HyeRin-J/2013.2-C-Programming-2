#include <stdio.h>

void main()
{
	int ary[][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int (*ptr)[5];
	int i , j ;

	ptr = ary ;//포인터로 배열 지정

	for(i=0 ; i < sizeof(ary) / sizeof(*ary) ; i++)//이중 반복문
	{
		for(j=0 ; j < 5 ; j++)
		{
			ptr[i][j] += 5 ;//포인터를 이용하여 5씩 값 추가
			printf("%2d " , ptr[i][j]) ;
		}
		printf("\n");
	}

	getchar();
}