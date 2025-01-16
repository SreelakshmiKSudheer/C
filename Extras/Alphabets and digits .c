#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int ac = 0,dc = 0;

    fp = fopen("Alpha digit.txt","r");

    while((ch = getc(fp)) != EOF)
    {
        putchar(ch);
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            ac++;

        else if(ch >= '0' && ch <= '9')
            dc++;
    }

    fclose(fp);

    printf("\nNo. of alphabets in the line of text = %d\n",ac);
    printf("No. of digits = %d",dc);
}
