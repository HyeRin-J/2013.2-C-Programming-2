#include <stdio.h>

void main()
{
	int arr[5][5]={0};//�迭
	int lim=5;//���� �̵� �Ѱ�
	int num=1, add=1;//��, ����
	int i=0, j=0;//�迭 ����, ����
	int p=0, k=0;//�ݺ���, ��ġ�Է�

	printf("input number(1~4) : ");
	scanf("%d", &k);

	switch(k){//���ڿ� ���� ��ġ �� ���� ����. 1�� ������ or �Ʒ���, -1�� ���� or ����.
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

	//�迭 ������ ���� �ݺ���
	while(1){
		if(k==1||k==3){//1�� ��� ���������� �̵�, 3�ϰ�� �������� �̵�
			for(p=0; p<lim; p++){	
				i=i+add;
				arr[i][j]=num;//���ڸ� �迭�� �����Ѵ�.
				num++;//���ڰ� ����
			}
			lim--;//�Ѱ�ġ ����.
			for(p=0; p<lim; p++){
				j=j+add;
				arr[i][j]=num;//���ڸ� �迭�� �����Ѵ�.
				num++;//���ڰ� ����
			}
			add=-add;//������ �̵��� ���� ��ȯ
		}
		//1�� 3�� ���� ����. �ٸ� ���� ���η� ���� �̵��Ѵ�. 2�� ��� �Ʒ�, 4�� ��� ��.
		if(k==2||k==4){
			for(p=0; p<lim; p++){
				j=j+add;
				arr[i][j]=num;//���ڸ� �迭�� �����Ѵ�.
				num++;//���ڰ� ����
			}
			lim--;
			add=(-add);//���� �� �̵� �� ��ȣ ��ȯ
			for(p=0; p<lim; p++){
				i=i+add;
				arr[i][j]=num;//���ڸ� �迭�� �����Ѵ�.
				num++;//���ڰ� ����
			}
		}
		if(lim<0) break;//lim�� 0�̸��� ��쿡 ����
	}

	//�迭�� ����Ѵ�.
	for(j=0; j<5; j++){
		for(i=0; i<5; i++){
			printf("%3d", arr[i][j]);
		}
		printf("\n\n");
	}

	getchar();
	getchar();
}