#include <stdio.h>

char lower(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
		return ch + 32;
	return ch;
}


int main()
{
    char s[100];
    int t,b,i,palindrome = 1;

    printf("Enter a text: ");
    scanf("%[^\n]",s);

    t = 0;

    for(i = 0; s[i] != '\0' ; i++);
    b = i - 1;

    while(t < b)
    {
            if(!(lower(s[t++]) == lower(s[b--])))
            {
                palindrome = 0;
                break;
            }

    }

    if(palindrome)
        printf("%s is a PALINDROME",s);
    else    
        printf("%s is NOT a palindrome",s);

}
