#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: printf("Number of days: 31");
				break;
		case 4:
		case 6:
		case 9:
		case 11: printf("Number of days: 30");
				break;
		case 2: printf("Number of days: Generally 28 days. 29 days in Leap year");
				break;
		default: printf("Invalid month number");
		return 0;		
	}
}
