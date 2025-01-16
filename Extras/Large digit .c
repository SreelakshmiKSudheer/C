#include <stdio.h>

int main()
{
	int number,large = 0,digit;
	printf("Enter a counting number: ");
	scanf("%d",&number);

	
	while(number)
	{
		digit = number % 10;
		number /= 10;
		if(digit > large)
			large = digit; 
		
	}
	printf("Large digit is = %d",large);
	
}
