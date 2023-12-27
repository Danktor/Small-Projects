#include<stdio.h>

int main(void){
	float loan, interest, payment, first, second, third, monthly_interest;
	printf("Enter amount of loan: ");
	scanf("%f",&loan);
	printf("\nEnter interest rate: ");
	scanf("%f",&interest);
	printf("\nEnter monthly payment: ");
	scanf("%f",&payment);
	
	monthly_interest = (interest/12.00)/100.00;
	first = loan*(1+1*monthly_interest) - payment;
	second = first*(1+1*monthly_interest) - payment;
	third = second*(1+1*monthly_interest) - payment;
	
	printf("\nBalance remaining after first payment: %.2f\n",first);
	printf("Balance remaining after second payment: %.2f\n",second);
	printf("Balance remaining after third payment: %.2f\n",third);


	return 0;
}
