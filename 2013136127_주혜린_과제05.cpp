#include <stdio.h>

void Prime(int a, int *prime2)//a������ �Ҽ��� ���ϴ� �Լ�
{
	int i;
	for(i = 2; i < a; i++)
	{
		if(a % i == 0)break;
	}
	if(i == a)	*prime2=i;
}

int Prime2(int b){//b�� �Ҽ����� �ƴ����� �Ǻ��ϴ� �Լ�
	int i, a=0;

	for(i = 2; i < b; i++)
		if(b % i == 0)
		{
			a++;
		}
		if(a == 0)
			return 1;
		else
			return 0;
}

void main()
{
	int i=2, prime=2;
	int num=0, num2=0;
	int *a=&num, *b=&num2, *c=&i;
	int *prime2=&prime;

	while(1){
		printf("4 �̻��� ¦���� �Է��ϼ��� => ");
		scanf("%d", &(*a));
		if((*a%2==1) || *a<4)
		{
			printf("�Է°��� �߸��Ǿ����ϴ�. �ٽ� �Է��� �ּ���!\n\n");
		}
		else{
			for(i=2; i<=*a; i++){
				{
					Prime(*c, prime2);

					*b=*a-*prime2;

					if(Prime2(*b)==1){
						printf("\n%d = %d + %d\n", *a, *prime2, *b);
						break;
					}
				}
			}
		}
		if(*a==*prime2+*b) break;

	}
	printf("\n");

	getchar();
	getchar();
}