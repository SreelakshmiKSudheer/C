#include <stdio.h>

int perfect(int k)
{
	int i,sum = 0;
	
	for(i = 1; i < k; i++)
	{
		if(k % i == 0)
			sum += i;
	}
	
	if(sum == k)
		return 1;
	return 0;
}

int main()
{
	int k;
	
	printf("Enter a number: ");
	scanf("%d",&k);
	
	if(perfect(k))
		printf("%d is a perfect number\n",k);
	else
		printf("%d is not a perfect number\n",k);
}
