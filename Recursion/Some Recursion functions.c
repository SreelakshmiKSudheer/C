#include <stdio.h>

// reverse a string using recursion
void revstr(char s[]);
// print the same number
void same(int num);
// print the binary equivalent of a decimal number
void dtb(int num);
// print fibonacci series up to k terms
int fibo(int k);
// reverse a number
int revnum(int num);

int main()
{
    revstr("The");
    dtb(7);
    same(15576);
    printf("%d",revnum(15576));
}

void revstr(char s[])
{
    if(*s)                          // check whether it's not a null character
    {
        revstr(s + 1);              // move to next character
        printf("%c",*s);            // printing will start from the last character
    }
}
void same(int num)
{
    if(num)
    {
        int rem = num % 10;             // the rightmost digit is taken
        same(num/10);                   // removes the rightmost digit
        printf("%d",rem);               // prints the rightmost digit, but since recursion is happening the leftmost digit is printed first
    }
}
void dtb(int num)
{
    if(num)
    {
        int rem = num % 2;
        dtb(num/2);
        printf("%d",rem);
    }
}
int fibo(int k)
{
    if(k == 1)
        return 0;
    else if(k == 2)
        return 1;
    return fibo(k - 1) + fibo(k - 2);
}
int revnum(int num)
{
    int rem ,sum = 0;
    if(num)
    {
        
        rem = num % 10;
        sum = sum*10 + rem;
        revnum(num/10);
        
    }
    else 
        return sum;
    return sum;
}


