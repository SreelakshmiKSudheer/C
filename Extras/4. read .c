#include <stdio.h>

int main()
{
    FILE *fp;

    char ch;

    fp = fopen("test.txt","w");

    printf("Write to the file: \n");


    while((ch = getchar()) != EOF)
        putc(ch,fp);

    fclose(fp);

    fp = fopen("test.txt","r");

    printf("Reading the file...\n\n-------------------\n\n");

    while((ch = getc(fp)) != EOF)
        putchar(ch);
    
    printf("\n-------------------\n");

}