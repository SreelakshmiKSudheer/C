#include <stdio.h>
int main()
{
    int number,i,sum = 0;

    printf("Enter a number: ");
    scanf("%d",&number);

    for(i = 1;i < number; i++)
    {
        if(number % i == 0)
            sum += i;
    }
    if(sum == number)
        printf("\nThe number %d is a PERFECT number.",number);
    else
        printf("\nThe number %d is NOT a perfect number.",number);
}
