#include <stdio.h>

void Swap(int *pn, int *pm) //�� ���ڸ� �ٲٴ� �Լ�
{
	int temp;
	temp = *pn;
	*pn = *pm;
	*pm = temp;
}

void main (void)
{
	int n,m ;
	int *pn=&n, *pm=&m;

	//������ ���� �Է¹���
	printf(" input n : ") ;
	scanf("%d", &pn) ;
	printf(" input m : ") ;
	scanf("%d", &pm) ;

	//�Է��� ���� ���
	printf(" input value => n = %d, m = %d\n" , pn, pm) ;

	//�Լ� ȣ��
	Swap(&pn, &pm) ;

	//�Լ� ȣ�� �� �ٲ� �� ���
	printf(" input value => n = %d, m = %d\n" , pn, pm) ;

	getchar();
	getchar();
}