#include <stdio.h>

void main()
{
	int ary[][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int (*ptr)[5];
	int i , j ;

	ptr = ary ;//�����ͷ� �迭 ����

	for(i=0 ; i < sizeof(ary) / sizeof(*ary) ; i++)//���� �ݺ���
	{
		for(j=0 ; j < 5 ; j++)
		{
			ptr[i][j] += 5 ;//�����͸� �̿��Ͽ� 5�� �� �߰�
			printf("%2d " , ptr[i][j]) ;
		}
		printf("\n");
	}

	getchar();
}