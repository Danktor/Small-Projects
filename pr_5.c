#include<stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void){
	int amount;
	int twenty = 0; int ten = 0; int five = 0; int one = 0;
	int *twenties = &twenty; int *tens = &ten; int *fives = &five; int *ones = &one;
	printf("Enter a US dollar amount: ");
	scanf("%d",&amount);
	pay_amount(amount,twenties,tens,fives,ones);	
	printf("$20 bills: %d\n",twenty);
	printf("$10 bills: %d\n",ten);
	printf("$5 bills: %d\n",five);
	printf("$1 bills: %d\n",one);
	return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
	*twenties = dollars/20;
	*tens = (dollars-*twenties*20)/10;
	*fives = (dollars-*twenties*20-*tens*10)/5;
	*ones = (dollars-*twenties*20-*tens*10-*fives*5)/1;
	
	
}
