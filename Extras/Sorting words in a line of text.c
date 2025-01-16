#include <stdio.h>
#include <string.h>

void sort(char s[][30],int k)
{
	int i,j;
	char temp[50];
	
	for(i = 1; i < k; i++)
	{
		for(j = 0; j < k - i; j++)
		{
			if(strcasecmp(s[j],s[j+1]) > 0)
			{
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
}


int main()
{
	char text[100], str[50][30];
	int i,j,k = 0;
	
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
				str[k][j++] = text[i];
			
			str[k][j] = '\0';
						
			//printf("%s\n",str[k]);
			
			k++;
			
		}
		
	}
	sort(str,k);
	
	printf("\nWords in sorted order: \n");
	
	for(i = 0; i < k; i++)
		printf("%s\n",str[i]);
	printf("\n");
	
}
