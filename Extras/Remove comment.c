#include <stdio.h>

int main()
{
    FILE *ip,*op;
    char ch,nch = ' ';

    ip = fopen("t.c","r");
    op = fopen("OP.c","w");

    while((ch = getc(ip)) != EOF)
    {
        if(ch == '/' && nch == '*')
        {
            while((ch != '*' && ch != '/'))
            {
                    ch = 
            } 
        }

    }
}