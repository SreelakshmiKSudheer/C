#include <stdio.h>

int main()
{
    int n,a[20],i,j,temp;

    printf("How many numbers? ");
    scanf("%d",&n);

    printf("Enter numbers: ");

    for(i = 0; i < n ; i++)
        scanf("%d",&a[i]);
        
    
    
    for( i = 1 ; i < n ; i++)
    {
		for(j = 0; j < n - i ; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			
		}
	}
	printf("The sorted list = {");
	
	for( i = 0; i < n; i++)
		printf("%d, ",a[i]);
	printf("\b\b}");


    

}
