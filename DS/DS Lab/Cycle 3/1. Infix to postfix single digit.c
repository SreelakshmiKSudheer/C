#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int top;
    char a[20];
}stack;

stack s1,s2,s3;
char infix[20];

void push(char s[],int *top,char item)
{
        s[++(*top)] = item;
}

char pop(char s[],int *top)
{
    if(*top == -1)
        return '\0';
    return s[(*top)--];
}

char readsymbol(char s[])
{
    static int i = 0;
    return s[i++];
}

int isp(char op)
{
    switch(op)
    {
        case '+':
        case '-': return 2;
        case '*':
        case '/': return 4;
        case '^': return 5;
        case '(': return 0;
        default: return -1;
    }
}

int icp(char op)
{
    switch(op)
    {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 3;
        case '^': return 6;
        case '(': return 7;
        case ')': return 0;
        default: return -1;
    }
}

int op(char c)
{
    switch (c)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^': return 1;
            break;
        default: return 0;
            break;
    }

}

int operand(char c)
{
    if(c >= '0' && c <= '9')
        return 1;
    return 0;
}

int ATOI(char a)
{
    switch(a)
    {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
    }
}
int operation(char a,char b, char op)
{
    int A,B;
    int result;

    A = atoi(&a);
    B = atoi(&b);
    switch(op)
    {
        case '+': return A+B;
        case '-': return A-B;
        case '*': return A*B;
        case '/': return A/B;
        case '^': result = pow(A,B);
                    return result; 
    }
}

void infix_to_postfix()
{
    int i;
    char item,x;

    for(i = 0; infix[i] != '\0';i++);

    infix[i++] = ')';
    infix[i] = '\0';
    push(s1.a,&(s1.top),'(');

    while(s1.top > -1)
    {
        item = readsymbol(infix);
        x = pop(s1.a,&(s1.top));

        if(item >= '0' && item <= '9')
        {
            printf("%c ",item);
            push(s2.a,&(s2.top),item);
            push(s1.a,&(s1.top),x);
        }
        else if(item == ')')
        {
            while(x != '(')
            {
                printf("%c ",x);
                push(s2.a,&(s2.top),x);
                x = pop(s1.a,&(s1.top));
            }
        }
        else if(isp(x) >= icp(item))
        {
            while(isp(x) >= icp(item))
            {
                printf("%c ",x);
                push(s2.a,&(s2.top),x);
                x = pop(s1.a,&(s1.top));
            }
            push(s1.a,&(s1.top),x);
            push(s1.a,&(s1.top),item);
        }
        else if(isp(x) < icp(item))
        {
            push(s1.a,&(s1.top),x);
            push(s1.a,&(s1.top),item);
        }
    }

}

int postfix_evaluation()
{
    int i,result;
    char item,a,b;

    push(s2.a,&(s2.top),'#');

    for(i = 0; s2.a[i] != '#'; i++)
    {
        item = s2.a[i];
        

        if(operand(item))
            push(s3.a,&(s3.top),item);
        else if (op(item))
        {
            a = pop(s3.a,&(s3.top));
            b = pop(s3.a,&(s3.top));

            result = operation(a,b,item);
            push(s3.a,&(s3.top),result);
        }
        
    }
    result = pop(s3.a,&(s3.top));
    return result;
}
int main()
{
    int result;
    s1.top = -1,s2.top = -1,s3.top = -1;

    printf("Enter an infix expression: ");
    scanf(" %[^\n]",infix);


    infix_to_postfix();

    result = postfix_evaluation();

    printf("\nThe result of the postfix expression evaluation = %d",result);
}
