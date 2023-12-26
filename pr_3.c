#include<stdio.h>

int main(void){\
	float amount;
	printf("Enter the amount: ");
	scanf("%f",&amount);
	printf("\nWith tax added: %.2f\n",amount+amount*0.05);
	return 0;
}
