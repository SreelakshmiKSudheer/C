#include <stdio.h>

int odd_dig(int num)
{
    int digit;
    while(num)
    {
        digit = num % 10;
        num /= 10;

        if(digit % 2 == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int a[10][10],m,n,i,j;

    printf("Enter the order of the matrix A(m x n) : ");
    scanf("%d%d",&m,&n);

    printf("Enter elements: \n");

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d",&a[i][j]);

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(odd_dig(a[i][j]))
                printf("%d\t",a[i][j]);
        }
    }
    printf("\n");
}