#include <stdio.h>

int main()
{
	int a[10][10],m,n,i,j,r_sum,c_sum,b_sum = 0;
	
	printf("Enter the order of matrix(m x n): ");
	scanf("%d%d",&m,&n);
	
	printf("Enter the elements of the matrix: ");
	
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%d",&a[i][j]);
			
	for(i = 0; i < m; i++)
	{
		r_sum = 0;
		
		for(j = 0; j < n; j++)
		{
			r_sum += a[i][j];
		}
		printf("Sum of %dth row = %d\n",i+1,r_sum);
	}
	
	for(j = 0; j < n; j++) 
	{
		c_sum = 0;
		
		for(i = 0; i < m; i++)
		{
			c_sum += a[i][j];
		}
		printf("Sum of %dth column = %d\n",j+1,c_sum);
	}
	
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i == 0 || j == 0 || i == m - 1 || j == n - 1)
				b_sum += a[i][j];
		}
	}
	printf("Sum of boundary elements = %d\n",b_sum);
}
