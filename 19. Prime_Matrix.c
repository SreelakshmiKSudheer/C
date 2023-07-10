#include <stdio.h>
#include <math.h>


int prime(int n)
{
	int final = sqrt(n),i;
	
	if(n <= 1)
		return 0;
	
	for(i = 2; i <= final; i++)
	{
		if(n%i == 0)
			return 0;
	}
	
	return 1;
	
	
}

int main()
{
	int m,n,i,j,a[10][10];
	
	
	printf("Enter the order of matrix(m x n): ");
	scanf("%d%d",&m,&n);
	
	printf("Enter the elements of the matrix:\n");
	
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%d",&a[i][j]);	
			
	printf("\nThe prime numbers in the matrix are: ");
	
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			if(prime(a[i][j]))
				printf("%d  ",a[i][j]);
				
	printf("\n");
			

}
