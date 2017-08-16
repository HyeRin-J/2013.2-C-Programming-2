#include <stdio.h>

void main()
{
	int arr[5][5]={0};//배열
	int lim=5;//숫자 이동 한계
	int num=1, add=1;//합, 방향
	int i=0, j=0;//배열 가로, 세로
	int p=0, k=0;//반복문, 위치입력

	printf("input number(1~4) : ");
	scanf("%d", &k);

	switch(k){//숫자에 따른 위치 및 방향 지정. 1은 오른쪽 or 아래쪽, -1은 왼쪽 or 위쪽.
	case 1:
		add=1;
		i=-1;
		j=0;
		break;
	case 2:
		add=1;
		i=4;
		j=-1;
		break;
	case 3:
		add=-1;
		i=5;
		j=4;
		break;
	case 4:
		add=-1;
		i=0;
		j=5;
		break;
	}

	//배열 저장을 위한 반복문
	while(1){
		if(k==1||k==3){//1일 경우 오른쪽으로 이동, 3일경우 왼쪽으로 이동
			for(p=0; p<lim; p++){	
				i=i+add;
				arr[i][j]=num;//숫자를 배열에 저장한다.
				num++;//숫자값 증가
			}
			lim--;//한계치 감소.
			for(p=0; p<lim; p++){
				j=j+add;
				arr[i][j]=num;//숫자를 배열에 저장한다.
				num++;//숫자값 증가
			}
			add=-add;//세로줄 이동후 방향 전환
		}
		//1과 3일 경우와 같다. 다른 점은 세로로 먼저 이동한다. 2일 경우 아래, 4일 경우 위.
		if(k==2||k==4){
			for(p=0; p<lim; p++){
				j=j+add;
				arr[i][j]=num;//숫자를 배열에 저장한다.
				num++;//숫자값 증가
			}
			lim--;
			add=(-add);//세로 줄 이동 후 부호 변환
			for(p=0; p<lim; p++){
				i=i+add;
				arr[i][j]=num;//숫자를 배열에 저장한다.
				num++;//숫자값 증가
			}
		}
		if(lim<0) break;//lim가 0미만일 경우에 종료
	}

	//배열을 출력한다.
	for(j=0; j<5; j++){
		for(i=0; i<5; i++){
			printf("%3d", arr[i][j]);
		}
		printf("\n\n");
	}

	getchar();
	getchar();
}