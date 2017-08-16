#include <stdio.h>

void Swap(int *pn, int *pm) //두 인자를 바꾸는 함수
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

	//각각의 수를 입력받음
	printf(" input n : ") ;
	scanf("%d", &pn) ;
	printf(" input m : ") ;
	scanf("%d", &pm) ;

	//입력한 숫자 출력
	printf(" input value => n = %d, m = %d\n" , pn, pm) ;

	//함수 호출
	Swap(&pn, &pm) ;

	//함수 호출 후 바뀐 값 출력
	printf(" input value => n = %d, m = %d\n" , pn, pm) ;

	getchar();
	getchar();
}