#include <stdio.h>

struct student
{
	int reg_no;
	char name[50];
	int mark[4];
	int total;
		
};

int main()
{
	struct student details[100];
	
	int n,i,j,tot,present = 0;
	
	char choice = 'y';
	
	printf("How many students? ");
	scanf("%d",&n);
	
	printf("Enter the details: \n");
	
	for(i = 0; i < n; i++)
	{
		printf("Student %d]\n",i+1);
		
		printf("Register number : ");
		scanf("%d",&details[i].reg_no);
		
		printf("Name		: ");
		scanf(" %[^\n]",details[i].name);
		
		details[i].total = 0;
		
		for(j = 0; j < 4; j++)
		{
			printf("Mark %d 		: ",j+1);
			scanf("%d",&details[i].mark[j]);
			
			details[i].total += details[i].mark[j];
		}		
	}	
	
	while(choice == 'y' || choice == 'Y')
	{
		printf("Enter the total mark: ");
		scanf("%d",&tot);
		
		printf("Students with total mark of %d : \n",tot);
		
		for(i = 0; i < n; i++)
		{
			if(details[i].total == tot)
			{
				
				printf("Register number : %d\n",details[i].reg_no);
				printf("Name		: %s\n",details[i].name);
		
				for(j = 0; j < 4; j++)
					printf("Mark %d 		: %d\n",j+1,details[i].mark[j]);
				printf("Total mark 	: %d\n\n",details[i].total);	
			}
		}
		
		if(!present)
			printf("No students with total mark of %d \n\n",tot);
		
		printf("Do you want to repeat(y/n): ");
		scanf(" %c",&choice);
		
	}
}
