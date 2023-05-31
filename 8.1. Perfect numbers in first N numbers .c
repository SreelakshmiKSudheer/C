#include <stdio.h>
int main()
{
    int N,number,i,sum;

    printf("Enter a N: ");
    scanf("%d",&N);
	
	for(number = 1;number <= N; number++)
    {
		sum = 0;
		for(i = 1;i < number; i++)
		{
        	if(number % i == 0)
            	sum += i;
		}
		if(sum == number)
			printf("%d\t ",number);
	}
}

