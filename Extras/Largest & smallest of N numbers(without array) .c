#include <stdio.h>

int main()
{
	int N,i,large,small,f_num,num;
	printf("How many numbers? ");
	scanf("%d",&N);
	
	printf("Enter a number: ");
	scanf("%d",&f_num);
	large = f_num;
	small = f_num;
	
	for(i = 1; i < N; i++)
	{
		printf("Enter a number: ");
		scanf("%d",&num);
		if(num > large)
			large = num;
		else if(num < small)
			small = num;
	}
	printf("\nLarge number is = %d",large);
	printf("\nSmall number is = %d",small);
}
