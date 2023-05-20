#include <stdio.h>

int main()
{
	int n,i;
	long int factorial = 1;
	float x,numerator = 1.0, sum = 0.0, term;
	
	printf("Enter number(n): ");
	scanf("%d",&n);
	
	printf("Enter the value of x: ");
	scanf("%f",&x);
	
	for(i = 1; i <= n; i++)
	{
		numerator = numerator * x;
		factorial = factorial* i;					// denominator
		term = numerator / factorial;
		sum = sum + term;
	}
	printf("\nSum = %f",sum);
	
	return 0;
}
