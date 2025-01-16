#include <stdio.h>
#include <math.h>
int main()
{
	int N,number = 2,j,final,prime = 0,count = 0;
	printf("Enter a number: ");
	scanf("%d",&N);
	

	while(count < N)
	{
		final = sqrt(number);
		prime = 1;
		
		for(j = 2; j <= final; j++)
		{
			
			if(number % j == 0)
			{
				prime = 0;
				break;
			}
		}
		if(prime)
		{
			printf("%d\t ",number);
			count++;
		}
		number++;

	}
	
}
