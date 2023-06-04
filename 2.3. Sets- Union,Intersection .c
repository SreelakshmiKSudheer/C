#include <stdio.h>

int main()
{
	int a[20],b[20],u[40],inter[20],m,n,i,j,c=0,d=0,t=1;
	
	printf("How many elements in array A: ");
	scanf("%d",&m);
	
	printf("How many elements in array B: ");
	scanf("%d",&n);
	
	printf("Enter elements in array A: ");
	
	for(i = 0; i < m ; i++)
		scanf("%d",&a[i]);
		
	printf("Enter elements in array B: ");
	
	for(i = 0; i < n ; i++)
		scanf("%d",&b[i]);

	for(i = 0 ; i < m ; i++)
	{
		t = 1;
		for(j = 0 ; j < n ; j++)
		{
			if(a[i] == b[j])
			{
				inter[c] = a[i];
				t = 0;
				c++;
			}
		}
		if(t)
		{
			u[d] = a[i];
			d++;
		}
	}
	
	printf("A intersection B = {");
	for(i = 0; i < c ; i++)
		printf("%d,",inter[i]);
	printf("\b}\n");
	
	for(i = 0; i < n ; i++)
	{
		u[d] = b[i];
		d++;
		
	}
	
	printf("A union B = {");
	for(i = 0; i < d ; i++)
		printf("%d,",u[i]);
	printf("\b}\n");
	
}
