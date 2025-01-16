#include <stdio.h>
int main()
{
	int m,n,i,j,p,q,k;

  float a[10][10],b[10][10];
	static float c[10][10];
	
	
	printf("Enter the order of matrix A(m x n): ");
	scanf("%d%d",&m,&n);
	
	printf("Enter the order of matrix B(m x n): ");
	scanf("%d%d",&p,&q);
	
	if (n != p)
		printf("Matrix multiplication is NOT POSSIBLE!");
	else
	{
		printf("Enter the elements of the matrix A:\n");
		
		for(i = 0; i < m; i++)
			for(j = 0; j < n; j++)
				scanf("%f",&a[i][j]);
			
	
		printf("Enter the elements of the matrix B:\n");
	
		for(i = 0; i < p; i++)
			for(j = 0; j < q; j++)
				scanf("%f",&b[i][j]);	
			
			
		for(i = 0; i < m; i++)
			for(j = 0; j < q; j++)
			{
				for(k = 0; k < n; k++)
				{
					c[i][j] += a[i][k]*b[k][j];
				}
			}
			
		for(i = 0; i < m; i++)
		{
			printf("| ");
			for(j = 0; j < q; j++)
				printf("%.3f ",c[i][j]);
			printf("|\n");
		}
	}		
	
}
