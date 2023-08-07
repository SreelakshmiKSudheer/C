#include <stdio.h>

int main()
{
	int year;
	
	printf("Enter year: ");
	scanf("%d",&year);
	
	if(year % 400 == 0)
		printf("LEAP year");
	else if(year % 100 == 0)
		printf("NOT a leap year");
	else if(year % 4 == 0)
		printf("LEAP year");
	else
		printf("Not a leap year");
}
