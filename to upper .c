#include <stdio.h>

int main()
{
    FILE *fp,*op;
    char ch;

    fp = fopen("Alpha digit.txt","r");
    op = fopen("Upper.txt","w");

    while((ch = getc(fp)) != EOF)
    {
        if(ch >= 'a' && ch <= 'z')
            ch -= 32;

        putc(ch,op);
        

    }

    fclose(fp);
    fclose(op);

    op = fopen("Upper.txt","r");
    

    while((ch = getc(op)) != EOF)
        putchar(ch);

    fclose(op);
}
