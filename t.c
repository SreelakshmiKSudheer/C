#include <stdio.h>

extern int a;

void test();

int main()
{
        printf("%d\n",a++);
        test();
        printf("%d\n",a++);
}

int a = 100;

void test()
{
        a = 10;
        printf("%d\n",a++);
}