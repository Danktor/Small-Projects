#include<stdio.h>

int main(void){
	int y,m,d;
	char one,two;
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d%c%d%c%d",&m,&one,&d,&two,&y);
	printf("You entered date %d%02d%02d",y,m,d);

	return 0;
}
