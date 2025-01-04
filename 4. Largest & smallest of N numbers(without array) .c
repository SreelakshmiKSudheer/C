#include <stdio.h>

int main()
{
	int N,i,large,small,num;
	printf("How many numbers? ");
	scanf("%d",&N);
	
	printf("Enter numbers: ");
	scanf("%d",&num);
	large =num;
	small =num;
	
	
	for(i = 1; i < N; i++)
	{
		
		scanf("%d",&num);
		if(num > large)
			large = num;
		else if(num < small)
			small = num;
	}
	printf("\nLarge number is = %d",large);
	printf("\nSmall number is = %d",small);
	
	return 0;
}
