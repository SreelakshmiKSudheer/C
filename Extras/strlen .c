#include <stdio.h>

int slen(char str[])
{
	int i;
	
	for(i = 0; str[i] != '\0' ; i++);
	
	return i;
}

int main()
{
		char s[50];
		
		printf("String: ");
		scanf("%[^\n]",s);
		
		printf("Length of %s is %d\n",s,slen(s));
		
		
		
}


