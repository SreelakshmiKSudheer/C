#include <stdio.h>


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
			printf("%s\n",word);
		}
		
	}
	
}
