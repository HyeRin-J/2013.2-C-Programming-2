#include <stdio.h>
#include <stdlib.h>

void main (){
	char code_key[26];//��ȣȭ Ű
	char code_input[81];//��ȣ��
	//���ĺ�
	char code_Alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char *code=code_input;
	char *key=code_key;
	char *Alpha=code_Alpha;
	int i, j;

	printf("Key===>		");
	for(i=0; i<26; i++){
		scanf("%c", &key[i]);
	}
	fflush(stdin);
	printf("\n");

	printf("Code===>	");
	gets(code);

	printf("\n");

	for(i=0; i<81; i++){//�Է¹��� ��ȣ���� ���ĺ��� �ƽ�Ű�ڵ尡 ������ �� ��ġ�� Ű���� ����
		for(j=0; j<26; j++){
			if(code[i]==Alpha[j]-32){//�빮�� �˻�
				code[i]=key[j]-32;
				break;
			}
			else if(code[i]==Alpha[j]){//�ҹ��� �˻�
				code[i]=key[j];
				break;
			}
		}
	}

	printf("Real Message==>	");

	for(i=0; i<81; i++){//�ص��� ��ȣ�� ���
		if(code[i]=='\0') break;
		printf("%c", code[i]);
	}
	printf("\n\n");
	system("pause");
}
//eydbkmiqugjxlvtzpnwohracsf
//Kifq oua zarxa suar bti yaagrj fa xtfgrj
//Jump the fence when you seeing me coming 