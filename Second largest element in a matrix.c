#include <stdio.h>

int main()
{
	int large,sec_large,i,j,m,n,a[10][10],r1,c1,r2,c2;
	
	printf("Enter the order of the matrix A(m x n): ");
	scanf("%d%d",&m,&n);
	
	printf("Enter elements: ");
	
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%d",&a[i][j]);
			
	if(a[0][0] > a[0][1])
	{
		large = a[0][0];
		r1 = 0; c1 = 0;
		sec_large = a[0][1];
		r2 = 0; c2 = 1;
	}
	else
	{
		large = a[0][1];
		r1 = 0; c1 = 1;
		sec_large = a[0][0];
		r2 = 0; c2 = 0;
	}
	
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
		{
			if(a[i][j] > large)
			{
				sec_large = large;
				r2 = r1; c2 = c1;

				large = a[i][j];
				r1 = i; c1 = j;

			}
			else if(a[i][j] != large && a[i][j] > sec_large)
			{
				sec_large = a[i][j];
				r2 = i; c2 = j;
			}
		}

	printf("Second largest number in the matrix is %d\n Position:\n\tRow : %d\n\tColumn : %d",sec_large,r2 + 1,c2 + 1);
}
