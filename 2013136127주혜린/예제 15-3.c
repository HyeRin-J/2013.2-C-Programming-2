#include <stdio.h>

void main(void)
{

	char A;

	printf("알파벳 입력(0:종료)\n");

	while(1)
	{
		scanf("%c",&A);//알파벳 입력받음

		if(A == '0'){//0일경우 프로그램 종료
			printf("프로그램을 종료합니다!\n");
			break;
		}

		if( 97 <= A  && A <= 129){//소문자일경우 대문자로 변환
			printf("대문자로 변환 : %c\n" , A-32);
		}
		else if(65 <= A && A <= 90){//대문자일경우 소문자로 변환
			printf("소문자로 변환 : %c\n" , A+32);
		}
	} 

	getchar();
	getchar();
}
