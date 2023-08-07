#include <stdio.h>

int main()
{
	int num,n;
	
	printf("Enter an integer: ");
	scanf("%d",&num);
	
	n = num < 0? -num: num;
	
	if(n % 2 == 0)
		printf("%d is EVEN",num);
	else
		printf("%d is ODD",num);
}
