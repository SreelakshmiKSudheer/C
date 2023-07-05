#include <stdio.h>

int main()
{
	int bi_num,dec_num,bit,multiplier = 1; 		
	char choice = 'y';
	
	while (choice == 'y' || choice == 'Y')
	{
		multiplier = 1, dec_num = 0;
		printf("Input a binary number: ");
		scanf("%d",&bi_num);
	
		while(bi_num)
		{
			bit = bi_num % 10;
			if(!(bit == 0 || bit == 1))
			{
				printf("Not a binary number.\nEnter again: ");
				scanf("%d",&bi_num);
				dec_num = 0;
				multiplier = 1;

				continue;

				
			}
			else
			{
				dec_num += bit * multiplier;
				multiplier *= 2;
				bi_num /= 10;

			}

		}
	printf("Equivalent decimal number = %d\n",dec_num);		
	printf("Do you want to repea(y/n)t: ");
	scanf(" %c",&choice);
	}
	

}
