#include <stdio.h>

void STRcat(char *a, char *b)       // pointer
{
    /*
    for(i = 0; *a != '\0' ; i++)        
        a++;
    */

    while(*a != '\0')
        a++;

    while(*b != '\0')
        *a++ = *b++;

    *a = '\0';
}

void scat(char a[], char b[])       // array passing
{
    int i,j;

    for(i = 0; a[i] != '\0' ; i++);

    for(j = 0; b[j] != '\0' ; j++)
        a[i++] = b[j];

    a[i] = '\0';
}

int main()
{
    char s1[50],s2[20];
    int i,j;

    printf("Enter first string: ");
    scanf(" %[^\n]",s1);
    
    printf("Enter second string: ");
    scanf(" %[^\n]",s2);

    for(i = 0; s1[i] != '\0' ; i++);

    for(j = 0; s2[j] != '\0' ; j++)
        s1[i++] = s2[j];

    s1[i] = '\0';

    //scat(s1,s2);
    //STRcat(s1,s2);
    printf("%s",s1);


}