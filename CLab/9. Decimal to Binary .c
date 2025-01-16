#include <stdio.h>

int main()
{
	int dec,i = 0,bi[20],n;
	
	printf("Enter a counting number: ");
	scanf("%d",&dec);
	
	while(dec)
	{
		bi[i] = dec % 2;
		dec /= 2;
		i++;
	}
	
	n = i - 1;
	
	for( i = n ; i >= 0 ; i--)
		printf("%d",bi[i]);
	printf("\n");
}
