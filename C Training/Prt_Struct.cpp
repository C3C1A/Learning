#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
struct card{
	char *face;
	char *suit;
};
typedef struct card Card;
void filldeck(Card[],char *[],char *[]);
void shuffle(Card[]);
void deal(Card[]);
int main(){

	int x;
	Card deck[52];
	char *face[] = {"Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
	char *suit[] = {"Heart","Diamond","Club","Spades"};
	srand(clock());
	filldeck(deck,face,suit);
	shuffle(deck);
	deal(deck);


	scanf("%d",&x);
	return 0;
}
void filldeck(Card deck[],char *face[],char *suit[]){
	for(int i=0;i<52;i++){
		deck[i].face = face[i%13];
		deck[i].suit = suit[i/13];
	}
}
void shuffle(Card deck[]){
	int i,j;
	Card temp;
	for(i=0;i<52;i++){
		j = rand() % 52;
		if(i!=j){
			temp = deck[i];
			deck[i] = deck[j];
			deck[j] = temp;
		}
	}
}
void deal(Card deck[]){
	int i;
	for(i=0;i<52;i++)
		printf("%5s of %-8s%c",deck[i].face,deck[i].suit,(i+1)%2 ? '\t' : '\n');
}