#include <stdio.h>

int main()
{
	int number,digit,sum = 0,reverse = 0;
	printf("Enter a counting number: ");
	scanf("%d",&number);
	
	while(number)
	{
		digit = number % 10;				// to get digits
		number = number / 10;			
		sum = sum + digit;
		reverse = (reverse * 10) + digit;
		
	}
	
	printf("Sum = %d\n",sum);
	printf("Reverse number = %d\n",reverse);
	
	return 0;
}
