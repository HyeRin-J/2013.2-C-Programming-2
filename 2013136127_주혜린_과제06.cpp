#include <stdio.h>
#include <string.h>
void main (){
	char string[101][11]={0};
	int freq[101][26]={0};
	int sum[101]={0};
	int length[101]={0};
	int noverlap=0, count=0;
	int a;
	int i, j;

	printf("�� ���� �ܾ �Է�==>");
	scanf("%d", &a);//�ܾ� �Է� ����

	printf("\n�ܾ� �Է�\n");
	for(i=0; i<=a; i++){//�ܾ� �Է� ����
		gets(string[i-1]);
	}
	count=a-1;
	printf("\n");

	for(i=0; i<a; i++){//�� �ܾ�� ���� ���ĺ��� �� ����
		for(j=0; j<11; j++){
			if(string[i][j]!=0)
				freq[i][string[i][j]-65]++;
		}
		length[i]=strlen(string[i]);//�� ���ڿ��� ����
	}

	for(i=1; i<a; i++){
		noverlap=0;
		if(length[0]-length[i]>1||length[i]-length[0]>1) count--;//���ڿ��� ���̰� 2�̻��̸� ����� �ܾ �ƴϴ�.
		else{
			for(j=0; j<26; j++){
				if((freq[0][j]!=freq[i][j])||(freq[0][j]-freq[i][j]>2||freq[i][j]-freq[0][j]>2)){//���ĺ��� ������ ��ġ�� �ʴ� ���
					noverlap++;
				}
				if(freq[i][j]!=freq[0][j]){//���� ���ĺ��� ������ �ٸ���� �ƽ�Ű�ڵ��� �� �հ�
					if(freq[0][j]!=0){//freq[0][j]�� ���� 0�� �ƴ� ���
						sum[0]+=((j+65)*freq[0][j]);
						sum[i]+=((j+65)*freq[i][j]);
					}
					else if(freq[0][j]==0){//freq[0][j]�� ���� 0�̶��
						if(freq[i][j]<2){//freq[i][j]���� 2���� ũ�� ���� ���
							sum[0]+=((j+65)*freq[0][j]);
							sum[i]+=((j+65)*freq[i][j]);
						}
					}
				}
			}
			if(noverlap>1){//��ġ�� �ʴ� ���� 2�̻��ϰ��
				if(sum[i]<sum[0]-90||sum[i]>sum[0]+90){//�ƽ�Ű�ڵ��� �հ谡 sum[0]+-'Z' ���̸� ����� �ܾ �ƴϴ�.
					count--;
				}
			}
		}
		printf("\n\n");
	}

	printf("����� �ܾ��� �� : %d\n", count);
	getchar();
}