#include <stdio.h>

int sec_small_digit(int num)
{
    int digit,small = 9,sec_small = 9;
    while(num)
    {
        digit = num % 10;
        num /= 10;

        if(digit < small)
        {
			sec_small = small;
			small = digit;
		}
		else if(digit != small && digit < sec_small)
			sec_small = digit;
    }
    return sec_small;
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
        for(j = 0; j < n; j++)
                printf("%d --> %d\n",a[i][j],sec_small_digit(a[i][j]));
    printf("\n");
}
