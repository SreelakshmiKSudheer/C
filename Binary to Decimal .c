#include <stdio.h>


int main()
{  
	int binum,decnum = 0,base = 1,rem,is_bi = 1,actual;
	
	printf("Input a binary number: ");
	scanf("%d",&binum);
	actual = binum;
	while(binum)
	{
		rem = binum % 10;
		
		if(rem == 0 || rem == 1)
		{
			decnum = decnum + (rem * base);
			base = base * 2;
			binum = binum/10;
		}
		else
		{
			is_bi = 0;
			printf("The given input is not binary\n");
			break;
		}
	}
	
	if(is_bi)
		printf("\nThe decimal equivalent of %d = %d",actual,decnum);
  return 0;
}

