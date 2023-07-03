#include <stdio.h>

int main()
{
	int count[26],i,n,ad;
	
	char s[100];
	
	for(i = 0; i < 26; i++)
		count[i] = 0;
	
	printf("Enter a line of text: ");
	scanf("%[^\n]",s);
	
	for(i = 0; s[i] != '\0'; i++);
	n = i;
	
	for(i = 0; i < n; i++)
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
	}
	
	for(i = 0; i < n; i++)
	{
		ad = s[i] - 'a';
		count[ad] += 1;
	}
	
	for(i = 0; i < 26; i++)
	{
		if(count[i] != 0)
		{
			printf("%c --> %d\n",'a'+i,count[i]);
		}
	}
}
