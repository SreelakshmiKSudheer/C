#include <stdio.h>
#include <math.h>

int main()
{
	int prime = 0,final,num,i;
	
	printf("Enter an integer: ");
	scanf("%d",&num);
	
	final = sqrt(num);
	
	for(i = 2; i <= final; i++)
	{
		prime = 1;
		
		if(num % i == 0)
		{
			prime = 0;
			break;
		}
	}
	if(num == 1)
		printf("Not prime not composite");
	else if(prime)
		printf("PRIME");
	else
		printf("Composite");
		
		
}
