#include <stdio.h>
#include <string.h>

int abcCount(char *x,int *y,char *z);

void main(void)
{
	int total;
	char word[100]; // ��� ���ڿ�
	char a; // ã�����ϴ� ���ڿ�


	printf("��� ���ڿ� �Է� : ");
	gets(word);

	printf("���� �� ���� �Է� : ");
	scanf("%c",&a);

	total = abcCount(word,sizeof(word)/sizeof(char),a); //�Լ� ȣ��

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
		if(x[i]==z){ 		// ������ ���鼭 ����ڿ� ������ ī��������
			count++;
		}
	}
	return count;
}
