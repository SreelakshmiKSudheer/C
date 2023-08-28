#include <stdio.h>

void revstr(char []);
void dtb(int num);

void same(int num)
{
    if(num)
    {
        int rem = num % 10;
        same(num/10);
        printf("%d",rem);
    }
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



int main()
{
    revstr("The");
    dtb(7);
    same(15576);
    printf("%d",revnum(15576));
}

int fibo(int k)
{
    if(k == 1)
        return 0;
    else if(k == 2)
        return 1;
    return fibo(k - 1) + fibo(k - 2);
}

void revstr(char s[])
{
    if(*s)
    {
        revstr(s + 1);
        printf("%c",*s);
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

