#include <stdio.h>

int main()
{
    int n,a[20],i,top,bottom,mid,key,present;
    char choice = 'y';

    printf("How many numbers? ");
    scanf("%d",&n);

    printf("Enter numbers in ascending order: ");

    for(i = 0; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    
	while(choice == 'y' || choice == 'Y')
    {
        printf("Enter the number to be searched: ");
		scanf("%d",&key);    
		top = 0, bottom = n;
     
		while(top < bottom)
		{
			present = 0;
			mid = (top + bottom) / 2;
			if(a[mid] == key)
			{
					printf("%d is present at position %d\n",key,mid + 1);
					present = 1;
					break;
			}
			else if(key < a[mid])
				bottom = mid - 1 ;
			else
				top = mid + 1 ;
		}
	
		if(!present)
			printf("%d is not present\n",key);
		
        
			
		printf("Do you want to repeat(y/n): ");
		scanf(" %c",&choice);

    }

}
