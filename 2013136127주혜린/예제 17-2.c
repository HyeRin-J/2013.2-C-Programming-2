#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	FILE *fp;
	char C[50];

	if((fp=fopen("Char.txt","r")) ==NULL)
	{
		fprintf(stderr,"Error opening file %s.", fp);
		exit(1);
	}

	//���Ͽ��� ���ڿ��� �Է¹���
	fgets(C, sizeof(C), fp);

	//ȭ�鿡 ���
	puts(C);
	
	fclose(fp);

	getchar();
}