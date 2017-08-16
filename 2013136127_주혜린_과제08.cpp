#include <stdio.h>
typedef struct card{
	int face;
	int number;
}Card;

int function(Card, Card, Card, Card, Card);//족보 검사 함수

void main()
{
	Card Card[5], temp;

	int i, j;
	int num;

	for(i=0; i<5; i++){//카드 입력 받음
		printf("카드의 모양은?(1 : 다이아, 2 : 클로버, 3 : 하트, 4 : 스페이드, 0 : 조커)\n");
		scanf("%d", &Card[i].face);
		if(Card[i].face!=0){
			printf("카드의 숫자는?(Ace : 1, Jack : 11, Queen : 12, King : 13)\n");
			scanf("%d", &Card[i].number);
		}
		else 
			Card[i].number=0;
	}
	printf("\n");

	for(i=0 ; i < 4 ; i++)//카드 숫자별로 정렬
	{
		for(j=i+1 ; j < 5 ; j++)
		{
			if( Card[i].number > Card[j].number )
			{
				temp = Card[i] ;
				Card[i] = Card[j] ;
				Card[j] = temp ;
			}
		}
	}

	printf("입력한 카드는=>");

	for(i=0; i<5; i++){//카드에 맞게 출력
		if(Card[i].face==1)
			printf("◆");
		else if(Card[i].face==2) 			
			printf("♣");
		else if(Card[i].face==3)
			printf("♥");
		else if(Card[i].face==4)
			printf("♠");
		else if(Card[i].face==0)
			printf("Joker");

		if(Card[i].number==1)
			printf("A\t");
		else if(Card[i].number==11)
			printf("J\t");
		else if(Card[i].number==12)
			printf("Q\t");
		else if(Card[i].number==13)
			printf("K\t");
		else if(Card[i].number==0)
			printf("\t");
		else
			printf("%d\t", Card[i].number);
	}
	printf("\n");

	num=function(Card[0],Card[1],Card[2],Card[3],Card[4]);//족보 함수의 리턴값 저장

	switch(num){//리턴값에 맞게 출력
	case 0:
		printf("노페어입니다\n");
		break;
	case 1:
		printf("원페어입니다.\n");
		break;	
	case 2:
		printf("투페어입니다.\n");
		break;
	case 3:
		printf("트리플입니다.\n");
		break;
	case 4:
		printf("스트레이트입니다.\n");
		break;
	case 5:
		printf("플러쉬입니다.\n");
		break;
	case 6:
		printf("풀하우스입니다.\n");
		break;
	case 7:
		printf("포카드입니다.\n");
		break;
	case 8:
		printf("스트레이트플러쉬입니다.\n");
		break;
	case 9:
		printf("로열스트레이트플러쉬입니다.\n");
		break;

	}

	getchar();
	getchar();
}

int pair(Card a,Card b,Card c,Card d,Card e)//페어를 검사하는 함수
{
	int freq[14]={0};
	int i, num=0;

	freq[a.number]++;
	freq[b.number]++;
	freq[c.number]++;
	freq[d.number]++;
	freq[e.number]++;

	for(i=13; i>0; i--){
		if(freq[i]==1){
			freq[i]++;
			break;
		}
	}

	for(i=0; i<14; i++){
		if(freq[i]==2) num++;
	}

	return num;
}

int triple(Card a,Card b,Card c,Card d,Card e)//트리플을 검사하는 함수
{
	int freq[14]={0};
	int i, num=0;

	freq[a.number]++;
	freq[b.number]++;
	freq[c.number]++;
	freq[d.number]++;
	freq[e.number]++;

	for(i=13; i>0; i--){
		if(freq[i]==3) num++;
	}

	if(num==1) return 1;
	else return 0;
}

int straight(Card a,Card b,Card c,Card d,Card e){//스트레이트를 검사하는 함수
	int freq[14]={0};
	int num=0;

	freq[a.number]++;
	freq[b.number]++;
	freq[c.number]++;
	freq[d.number]++;
	freq[e.number]++;

	if(a.number==0){
		if(freq[b.number]==1) num++;
		if(freq[b.number+1]==1) num++;
		if(freq[b.number+2]==1) num++;
		if(freq[b.number+3]==1) num++;
		if(freq[b.number+4]==1) num++;
		
		if(num==4) return 1;
		else return 0;
	}

	else{
		if(freq[a.number]==1) num++;
		if(freq[a.number+1]==1) num++;
		if(freq[a.number+2]==1) num++;
		if(freq[a.number+3]==1) num++;
		if(freq[a.number+4]==1) num++;
	if(num==5) return 1;
	else return 0;
	}
}

int plush(Card a,Card b,Card c,Card d,Card e)//플러쉬를 검사하는 함수
{
	int num=0;

	if(a.face==0){
		if(b.face==c.face) num++;
		if(b.face==d.face) num++;
		if(b.face==e.face) num++;

		if(num==3) return 1;
		else return 0;
	}

	else{
		if(a.face==b.face) num++;
		if(a.face==c.face) num++;
		if(a.face==d.face) num++;
		if(a.face==e.face) num++;

		if(num==4) return 1;
		else return 0;
	}

}

int fullhouse(Card a,Card b,Card c,Card d,Card e){//풀하우스를 검사하는 함수
	if(pair(a,b,c,d,e)==1){
		if(triple(a,b,c,d,e)==1){
			return 1;
		}
		else return 0;
	}
	else return 0;
}

int fourcard(Card a,Card b,Card c,Card d,Card e)//포카드를 검사하는 함수
{
	int freq[14]={0};
	int i, num=0;

	freq[a.number]++;
	freq[b.number]++;
	freq[c.number]++;
	freq[d.number]++;
	freq[e.number]++;

	for(i=0; i<14; i++){
		if(freq[i]==3) num++;
	}

	for(i=0; i<14; i++){
		if(freq[i]==4) num++;
	}

	if(num==1) return 1;
	else return 0;
}

int stiple(Card a,Card b,Card c,Card d,Card e){//스트레이트플러쉬를 검사하는 함수

	if(straight(a,b,c,d,e)==1){
		if(plush(a,b,c,d,e)==1){
			return 1;
		}
		else return 0;
	}

	else return 0;
}

int rotiple(Card a,Card b,Card c,Card d,Card e){//로열스트레이트플러쉬를 검사하는 함수
	int freq[14]={0};
	int num=0;

	freq[a.number]++;
	freq[b.number]++;
	freq[c.number]++;
	freq[d.number]++;
	freq[e.number]++;

	if(plush(a,b,c,d,e)==1){
		if(a.number==0){
			if(freq[1]==1) num++;
			if(freq[10]==1) num++;
			if(freq[11]==1) num++;
			if(freq[12]==1) num++;
			if(freq[13]==1) num++;

			if(num==4) return 1;
			else return 0;
		}

		else{
			if(freq[1]==1) num++;
			if(freq[10]==1) num++;
			if(freq[11]==1) num++;
			if(freq[12]==1) num++;
			if(freq[13]==1) num++;


			if(num==5) return 1;
			else return 0;
		}
	}

	else
		return 0;
}

int function(Card a,Card b,Card c,Card d,Card e)//족보를 검사하는 함수
{
	if(rotiple(a,b,c,d,e)==1) return 9;
	if(stiple(a,b,c,d,e)==1) return 8;
	if(fourcard(a,b,c,d,e)==1) return 7;
	if(fullhouse(a,b,c,d,e)==1) return 6;
	if(plush(a,b,c,d,e)==1) return 5;
	if(straight(a,b,c,d,e)==1) return 4;
	if(triple(a,b,c,d,e)==1) return 3;
	if(pair(a,b,c,d,e)==2) return 2;
	if(pair(a,b,c,d,e)==1) return 1;
	else return 0;
}