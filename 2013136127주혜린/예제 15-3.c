#include <stdio.h>

void main(void)
{

	char A;

	printf("���ĺ� �Է�(0:����)\n");

	while(1)
	{
		scanf("%c",&A);//���ĺ� �Է¹���

		if(A == '0'){//0�ϰ�� ���α׷� ����
			printf("���α׷��� �����մϴ�!\n");
			break;
		}

		if( 97 <= A  && A <= 129){//�ҹ����ϰ�� �빮�ڷ� ��ȯ
			printf("�빮�ڷ� ��ȯ : %c\n" , A-32);
		}
		else if(65 <= A && A <= 90){//�빮���ϰ�� �ҹ��ڷ� ��ȯ
			printf("�ҹ��ڷ� ��ȯ : %c\n" , A+32);
		}
	} 

	getchar();
	getchar();
}
