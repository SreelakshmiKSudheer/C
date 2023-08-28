#include <stdio.h>

int main()
{
    FILE *fp;
    int nl = 0,nw = 0,nc = 0;
    char ch,pch = ' ';

    fp = fopen("Alpha digit.txt","r");

    while((ch = getc(fp)) != EOF)
    {
        nc++;

        if(ch == '\n')
            nl++;
        if((ch == ' ' || ch == '\t'|| ch == '\n') && (pch != ' ' && pch != '\t' && pch != '\n'))
            nw++;
            
        pch = ch;

    }

    

    printf("\nNo. of characters = %d",nc);
    printf("\nNo. of words = %d",nw);
    printf("\nNo. of line = %d",nl);
    
    fclose(fp);

}
