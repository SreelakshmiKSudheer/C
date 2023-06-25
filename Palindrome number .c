// To check whwther a number is palindrome

#include <stdio.h>

int main()
{
    int num,rev = 0,number;

    printf("Enter a number: ");
    scanf("%d",&num);

    number = num;

    while(num)
    {
        rev = (rev * 10) + (num % 10);          // rev * 10 + last digit
        num /= 10;
    }

    //printf("%d",rev);

    if(number == rev)
        printf("%d is a PALINDROME number\n",number);
    else    
        printf("%d is NOT a palindrome number\n",number);
}
