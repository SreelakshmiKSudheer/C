#include <stdio.h>

int large(int [],int);

int main()
{
	int a[10][10],m,n,i,j,lar;
	
	printf("Enter the order of matrix A(m x n): ");
	scanf("%d%d",&m,&n);
	
	printf("Enter the elements of the matrix:\n");
	
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%d",&a[i][j]);
			
	printf("Largest element of each row are: \n");
	
	for(i = 0; i < m ; i++)
	{
		lar = large(a[i],n);
		printf("Row %d : %d\n",i+1,lar);
	}
	printf("\n\n");
}

int large(int a[],int n)
{
	int lar = a[0],i;
	
	for(i = 0; i < n ; i++)
		if(a[i] > lar)
			lar = a[i];
	return lar; 
}
