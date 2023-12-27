#include<stdio.h>

int main(void){
	int amount,twenty,ten,five,one;
	printf("Enter a US dollar amount: ");
	scanf("%d",&amount);
	twenty = amount/20;
	ten = (amount-twenty*20)/10;
	five = (amount-twenty*20-ten*10)/5;
	one = (amount-twenty*20-ten*10-five*5)/1;
	
	printf("$20 bills: %d\n",twenty);
	printf("$10 bills: %d\n",ten);
	printf("$5 bills: %d\n",five);
	printf("$1 bills: %d\n",one);
	return 0;
}
