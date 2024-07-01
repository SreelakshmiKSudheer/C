#include <stdio.h>

void display(int matrix[][10],int m, int n)
{
    int i,j;
    printf("The matrix:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%.0f ",matrix[i][j]);
        
        printf("\n");
    }
}
int main()
{
    int M,N,i,j;

    printf("Enter the order of matrix: ");
    scanf("%d %d",&M,&N);

    const int m = M;
    const int n = N;
    float matrix[m][n],x;

    printf("Enter the matrix: \n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%f",&matrix[i][j]);
    
    int k = 0;
    for ( i = 1; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(matrix[i][j] != 0)
            {
                x = -1 * (matrix[i][j] / matrix[k][])
            }
        }
    }
    
    
}