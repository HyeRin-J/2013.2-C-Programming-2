#include <stdio.h>

void main (void)
{
	char a[]="C programing";
	char *pa=&a;
	int i;

	//���� ���ڿ� ���
	printf("%s", pa);

	printf("\n");

	//�����͸� �̿��Ͽ� ���ڿ��� �������� ���
	for(i=11; i>=0; i--)
	{
		printf("%c", pa[i]);
	}

	getchar();
	getchar();
}