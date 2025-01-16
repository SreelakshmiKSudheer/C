#include <stdio.h>

int main()
{
	int num1,num2, numerator,denominator,remainder, gcd,lcm;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	
	remainder = numerator % denominator;
	
	while(remainder)
	{
		numerator = denominator;
		denominator = remainder;
		remainder = numerator % denominator;
	}
	
	gcd = denominator;
	
	lcm = num1 * num2 / gcd;
	
	printf("\nGCD = %d\nLCM = %d",gcd,lcm);
	
	return 0;
}
