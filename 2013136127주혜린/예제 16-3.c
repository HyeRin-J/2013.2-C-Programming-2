#include <stdio.h>
#include <math.h>

struct a{
	int x,y;
};

void main()
{
	struct a s1,s2;
	int q,w;
	double e;

	printf("���� ��ǥ�� �Է��ϼ���(x y)\n");
	scanf("%d %d",&s1.x,&s1.y);//��ǥ1 �Է�

	printf("���� ��ǥ�� �Է��ϼ���(x y)\n");
	scanf("%d %d",&s2.x,&s2.y);//��ǥ2 �Է�

	q = s1.x-s2.x;//x������ �Ÿ� ���
	w = s1.y-s2.y;//y������ �Ÿ� ���
	e = sqrt(q*q+w*w);//�������� ���Ѵ�.

	printf("�Ÿ��� %.1f�Դϴ�.\n", e);

	getchar();
	getchar();
}  