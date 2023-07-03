#include <stdio.h>

int main()
{
	int a[10][10],t[10][10],m,n,i,j,sym = 1;
	
	printf("Enter the order of matrix(m x n): ");
	scanf("%d%d",&m,&n);
	
	printf("Enter the elements of the matrix: ");
	
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%d",&a[i][j]);
			
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(a[i][j] != a[j][i])
			{
				sym = 0;
				break;
			}
		}
	}
	
	
	if(sym)
		printf("It is symmetric matrix\n");
	else
	{
		for(i = 0; i < m; i++)
			for(j = 0; j < n; j++)
				t[j][i] = a[i][j];		
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
			printf("%d ",t[i][j]);
		printf("\n");
	}
	
}
