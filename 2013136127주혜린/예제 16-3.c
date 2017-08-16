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

	printf("점의 좌표를 입력하세요(x y)\n");
	scanf("%d %d",&s1.x,&s1.y);//좌표1 입력

	printf("점의 좌표를 입력하세요(x y)\n");
	scanf("%d %d",&s2.x,&s2.y);//좌표2 입력

	q = s1.x-s2.x;//x사이의 거리 계산
	w = s1.y-s2.y;//y사이의 거리 계산
	e = sqrt(q*q+w*w);//제곱근을 구한다.

	printf("거리는 %.1f입니다.\n", e);

	getchar();
	getchar();
}  