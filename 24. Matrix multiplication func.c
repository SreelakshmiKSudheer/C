#include <stdio.h>

void readmat(int a[][10],int m,int n)
{
	int i,j;
	
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%d",&a[i][j]);
}

void dispmat(int a[][10],int m,int n)
{
	int i,j;
	
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}	
}

void matmult(int a[][10],int b[][10],int c[][10],int m,int n,int q)
{
	int i,j,k;
	
	for(i = 0; i < m; i++)
		for(j = 0; j < q; j++)
			c[i][j] = 0;
	
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < q; j++)
			for(k = 0; k < n; k++)
				c[i][j] += a[i][k]*b[k][j];
	}	
}

int main()
{
	int m,n,p,q,a[10][10],b[10][10],c[10][10];
	
	
	printf("Enter the order of matrix A(m x n): ");
	scanf("%d%d",&m,&n);
	
	printf("Enter the order of matrix B(p x q): ");
	scanf("%d%d",&p,&q);
	
	if(n != p)
		printf("Matrix multiplication is NOT possible!!\n\n");
	else
	{
		printf("Enter the elements of the matrix A:\n");
		readmat(a,m,n);
		
		printf("Enter the elements of the matrix B:\n");
		readmat(b,p,q);
		
		matmult(a,b,c,m,n,q);
		
		printf("A x B = \n");
		dispmat(c,m,q);
	}
	
	
	
}
