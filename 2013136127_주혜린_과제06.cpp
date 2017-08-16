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

	printf("몇 개의 단어를 입력==>");
	scanf("%d", &a);//단어 입력 갯수

	printf("\n단어 입력\n");
	for(i=0; i<=a; i++){//단어 입력 받음
		gets(string[i-1]);
	}
	count=a-1;
	printf("\n");

	for(i=0; i<a; i++){//각 단어별로 각각 알파벳의 빈도 조사
		for(j=0; j<11; j++){
			if(string[i][j]!=0)
				freq[i][string[i][j]-65]++;
		}
		length[i]=strlen(string[i]);//각 문자열의 길이
	}

	for(i=1; i<a; i++){
		noverlap=0;
		if(length[0]-length[i]>1||length[i]-length[0]>1) count--;//문자열의 길이가 2이상이면 비슷한 단어가 아니다.
		else{
			for(j=0; j<26; j++){
				if((freq[0][j]!=freq[i][j])||(freq[0][j]-freq[i][j]>2||freq[i][j]-freq[0][j]>2)){//알파벳의 갯수가 겹치지 않는 경우
					noverlap++;
				}
				if(freq[i][j]!=freq[0][j]){//둘이 알파벳의 갯수가 다를경우 아스키코드의 값 합계
					if(freq[0][j]!=0){//freq[0][j]의 값이 0이 아닐 경우
						sum[0]+=((j+65)*freq[0][j]);
						sum[i]+=((j+65)*freq[i][j]);
					}
					else if(freq[0][j]==0){//freq[0][j]의 값이 0이라면
						if(freq[i][j]<2){//freq[i][j]값이 2보다 크지 않을 경우
							sum[0]+=((j+65)*freq[0][j]);
							sum[i]+=((j+65)*freq[i][j]);
						}
					}
				}
			}
			if(noverlap>1){//겹치지 않는 수가 2이상일경우
				if(sum[i]<sum[0]-90||sum[i]>sum[0]+90){//아스키코드의 합계가 sum[0]+-'Z' 밖이면 비슷한 단어가 아니다.
					count--;
				}
			}
		}
		printf("\n\n");
	}

	printf("비슷한 단어의 수 : %d\n", count);
	getchar();
}