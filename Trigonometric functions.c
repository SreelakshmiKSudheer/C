#include <stdio.h>
#include <math.h>

#define PI 3.14159

float ABS(float x)
{
	return x < 0 ? -x : x;
}

float rad(float a)
{
	return a*PI/180;
}

float sine(float x)
{
	int n = 1;
	long int denom = 1;
	float num = x, term = x, sum = x;
	
	while(ABS(term) > 0.000001)
	{
		num *= -x*x;
		denom *= (n + 1)*(n + 2);
		n = n + 2;
		term = num/denom;
		sum += term;
	}
	
	return sum;
		
}

float cosine(float x)
{
	int n = 0;
	long int denom = 1;
	float num = 1, term = 1, sum = 1;
	
	while(ABS(term) > 0.000001)
	{
		num *= -x*x;
		denom *= (n + 1)*(n + 2);
		n = n + 2;
		term = num/denom;
		sum += term;
	}
	
	return sum;
		
}

int main()
{
	float x;
	
	printf("Enter angle in degrees: ");
	scanf("%f",&x);
	
	printf("Using library function:\nsin%.2f = %f\n",x,sin(rad(x)));
	printf("Using User defined function:\nsin%.2f = %f\n",x,sine(rad(x)));
	
	printf("Using library function:\ncos%.2f = %f\n",x,cos(rad(x)));
	printf("Using User defined function:\ncos%.2f = %f\n",x,cosine(rad(x)));
}
