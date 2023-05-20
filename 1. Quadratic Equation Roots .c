#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	float d, root, root1, root2, rp, ip;
	printf("Enter a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	d = b*b - 4*a*c;
	if(d == 0)
	{
		printf("Roots are real and equal OR only one root");
		root = (-b)/(2 * a);
		printf("\nThe root is %f",root);
		
	}
	else if(d > 0)
	{
		printf("Roots are real and distinct.");
		root1 = (-b + sqrt(d))/(2 * a);
		root2 = (-b - sqrt(d))/(2 * a);
		printf("\nThe roots are %f and %f",root1,root2);
		
	}
	else
	{
		printf("Roots are imaginary");
		rp = (-b)/(2 * a);
		ip = sqrt(-d)/(2 * a);
		
		printf("\nReal part= %f",rp);
		printf("\nImaginary part= %f",ip);
	}
	return 0;
	
}
