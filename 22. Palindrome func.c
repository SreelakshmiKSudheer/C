#include <stdio.h>

char lower(char ch)
{
	if(ch >= 'A' && ch <= 'Z')
		return ch + 32;
	return ch;
}

int palin(char s[])
{
	int i,l,r;
	
	for(i = 0; s[i] != '\0'; i++);
	
	l = 0;
	r = i - 1;
	
	while(l < r)
	{
		if(lower(s[l++]) != lower(s[r--]))
			return 0;
			
	}
	
	return 1;
}

int main()
{
	char text[100],word[20];
	int i,j = 0;
	
	printf("Enter a line of text: ");
	scanf(" %[^\n]",text);
	
	for(i = 0; text[i] != '\0'; i++)
	{
		j = 0;
		if(text[i] == ' ' || text[i] == '\t')
			continue;
			
		else
		{
			for(; text[i] != ' ' && text[i] != '\t' &&	text[i] != '\0'; i++)
				word[j++] = text[i];
			
			word[j] = '\0';
			
			if(palin(word))
				printf("%s\n",word);
		}
		
	}
	
}
