#include <stdio.h>

int main()
{
	int bi_num,dec_num = 0,digit,multiplier = 1; 		//v_input = 1,
	
	printf("Input a binary number: ");
	scanf("%d",&bi_num);
	
	while(bi_num)
	{
		
		//v_input = 1;
		digit = bi_num % 10;
		if(!(digit == 0 || digit == 1))
		{
			printf("The given input is not a binary number.\nEnter again: ");
			scanf("%d",&bi_num);
			//v_input = 0;
			continue;
		}
		dec_num = dec_num + (digit * multiplier);
		multiplier *= 2;
		bi_num /= 10;
		
		
	}
	printf("Equivalent decimal number = %d",dec_num);
}
