#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,n;
	char names[100][50],temp[50];
	
	printf("How many persons: ");
	scanf("%d",&n);
	
	printf("Enter names:\n");
	
	for (i = 0; i < n ; i++)
	{
		printf("%d) ",i+1);
		scanf(" %[^\n]",names[i]);
	}
	
	
	for(i = 0; i < n-1 ; i++)
	{
		for(j = i+1; j < n; j++)
		{
			if(strcasecmp(names[i],names[j]) > 0)
			{
				strcpy(temp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp);
			}
		}
	}
	
	printf("\nNames in sorted order: \n");
	
	for(i = 0; i < n; i++)
		printf("%d) %s\n",i+1,names[i]);
		
	printf("\n");
}
