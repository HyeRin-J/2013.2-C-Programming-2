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

	//파일에서 문자열을 입력받음
	fgets(C, sizeof(C), fp);

	//화면에 출력
	puts(C);
	
	fclose(fp);

	getchar();
}