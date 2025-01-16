// 2nd question

#include <stdio.h>

int main()
{
	int n,i,first_digit,num,digit,number;
	
	printf("How many numbers? ");
	scanf("%d",&n);
	
	printf("Enter starting digit: ");
	scanf("%d",&first_digit);
	
	printf("Enter numbers: ");
	
	for(i = 0; i < n; i++)
	{
		scanf(" %d",&num);			// getting n numbers using for loop
		number = num;
		
		while(num)					// to get the digits
		{
			digit = num % 10;
			num = num / 10;
			
		}
		
		if(digit == first_digit)
			printf("%d starts with the digit %d\n",number,first_digit);
	}
	return 0;
	
}
