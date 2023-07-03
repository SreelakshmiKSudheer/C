#include <stdio.h>

int main()
{
	int count[26],i,n,ad,high;
	
	char s[100];
	
	for(i = 0; i < 26; i++)									// initializing count with 0
		count[i] = 0;
	
	printf("Enter a line of text: ");						// reading text
	scanf("%[^\n]",s);
	
	for(i = 0; s[i] != '\0'; i++);							// no. elements in text
	n = i;
	
	for(i = 0; i < n; i++)									// converting to lowercase
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
	}
	
	for(i = 0; i < n; i++)									// counting the occurence
	{
		ad = s[i] - 'a';
		count[ad] += 1;
	}
	
	for(i = 0; i < 26; i++)									// no. occurence of each alphabet
	{
		if(count[i] != 0)
		{
			printf("%c --> %d\n",'a'+i,count[i]);
		}
	}
}
