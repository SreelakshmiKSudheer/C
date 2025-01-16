#include <stdio.h>

int power(int n,int p)
{
	int i,result = n;
	for(i = 0; i < p; i++)
		result *= n;
		
	return result;
}

int angstrome(int num)
{
	int number = num,digit,count = 0,sum = 0;
	
	while(num)
	{
		digit = num % 10;
		num /= 10;
		
		count++;
	}
	
	num = number; count--;
	
	while(num)
	{
		digit = num % 10;
		num /= 10;
		
		sum += power(digit,count);
	}
	
	if(sum == number)
		return 1;
	return 0;
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
            if(angstrome(a[i][j]))
                printf("%d\t",a[i][j]);
        }
    }
    printf("\n");
	
}
