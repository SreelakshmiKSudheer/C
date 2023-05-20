#include <stdio.h>

int main()
{
	int a,b, numerator,denominator,remainder, gcd,lcm;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	if(a > b)
	{
		numerator = a;
		denominator = b;
	}
	else
	{
		numerator = b;
		denominator = a;
	}
	 
	remainder = numerator % denominator;
	
	while(remainder)
	{
		numerator = denominator;
		denominator = remainder;
		remainder = numerator % denominator;
	}
	
	gcd = denominator;
	
	lcm = a * b / gcd;
	
	printf("\nGCD = %d\nLCM = %d",gcd,lcm);
	
	return 0;
}
