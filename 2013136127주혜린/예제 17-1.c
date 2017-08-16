#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	FILE *fp;
	char filename[20]="Char.txt";

	if((fp=fopen(filename,"w")) ==NULL)
	{
		fprintf(stderr,"Error opening file %s.", filename);
		exit(1);
	}

	//파일에 입력
	fprintf(fp,"%s ","ABCDEFGHIJKLMNOPQRSTUVWXYZ\n");
	
	fclose(fp);

	getchar();
}