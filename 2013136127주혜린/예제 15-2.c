#include <stdio.h>
#include <string.h>

int abcCount(char *x,int *y,char *z);

void main(void)
{
	int total;
	char word[100]; // 대상 문자열
	char a; // 찾고자하는 문자열


	printf("대상 문자열 입력 : ");
	gets(word);

	printf("세어 볼 문자 입력 : ");
	scanf("%c",&a);

	total = abcCount(word,sizeof(word)/sizeof(char),a); //함수 호출

	printf("%d\n",total);

	getchar();
	getchar();

}

int abcCount(char *x, int *y, char *z)
{
	int i;
	int count=0;
	for(i=0;i<y;i++)
	{
		if(x[i]==z){ 		// 루프를 돌면서 대상문자와 같으면 카운터증가
			count++;
		}
	}
	return count;
}
