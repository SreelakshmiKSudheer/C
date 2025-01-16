#include <stdio.h>
#include <math.h>

int main()
{
	int num,first,final,i,prime = 0,count = 0, last;
	
	printf("Enter the starting number: ");
	scanf("%d",&first);
	
	printf("Enter the ending number: ");
    scanf("%d",&final);
    
    printf("Prime number are: ");
    
    if(first > 1)				// if first = 1, num will also be 1, but minimum value of num should be 2					
		num = first;
	else
		num = 2;
    
    
    for(num;num <= final; num++)	// loop for numbers to numbers to be checked
    {
		last = sqrt(num);
		prime = 1;
		for(i=2;i <= last; i++)		// checking for factors
		{
			if(num%i == 0)			// checking for factors
			{
				prime = 0;
				break;
			}
		}
		if(prime)
		{
			printf("%d ",num);
			count++;
		}
	}
	printf("\nNumber of prime numbers = %d",count);
	return 0;
}




