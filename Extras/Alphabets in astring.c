// sorting the alphabets in a string

#include <stdio.h>

int main()
{
    int i,j,n;
    char str[30],temp;

    printf("Enter a text: ");
    scanf("%[^\n]",str);

    //sorting

    for(i = 0; str[i] != '\0'; i++);
    
    n = i;
    
    printf("%d\n",n);
    
    for(i = 1; i < n ; i++)						// bubble sort
    {
        for(j = 0; j < n - i; j++)
        {
            if(str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }


    printf("%s",str);
}
