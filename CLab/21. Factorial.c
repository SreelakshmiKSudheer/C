#include <stdio.h>

unsigned long int fact(int n);

int main()
{
    int n;
    
    printf("Enter a counting number: ");
    scanf("%d",&n);

    printf("%d! = %lu",n,fact(n));
}

unsigned long int fact(int n)
{

    if(n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}
