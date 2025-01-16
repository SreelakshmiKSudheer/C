#include <stdio.h>

int main()
{
    int n,i,a[20],key,present;
    char choice = 'y';

    printf("How many numbers? ");
    scanf("%d",&n);

    printf("Enter numbers: ");
    for(i = 0 ; i < n ; i++)
        scanf("%d",&a[i]);

    while(choice == 'y' || choice == 'Y')
    {
        present = 0;
        printf("Enter the number to be searched: ");
        scanf("%d",&key);

        for(i = 0 ; i < n ; i++)
        {
                if(a[i] == key)
                {
                    printf("The number %d is present at the position %d\n",key,i+1);
                    present = 1;

                }

        }
        if(!present)
			printf("The number %d is not present\n",key);
			
		printf("Do you want to repeat(y/n): ");
		scanf(" %c",&choice);

    }

}
