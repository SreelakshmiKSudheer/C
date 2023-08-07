#include <stdio.h>

void fibo(int n)
{
	int a = 0,b = 1,f = 1,count = 0;
	
	printf("%d\t%d\t",a,b);
	
	for(count = 2; count < n; count++)
	{
		printf("%d\t",f);
		
		 a = b; b = f; f = a+b;
	}
}

int main()
{
	int n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	fibo(n);
}
