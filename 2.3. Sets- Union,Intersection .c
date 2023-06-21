#include <stdio.h>

int main()
{
	int a[20],b[20],u[40],inter[20],m,n,i,j,i_n = 0,u_n = 0,common = 0, diff[20],d_n = 0;
	
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
		common = 0;
		for(j = 0 ; j < n ; j++)
		{
			if(a[i] == b[j])
			{
				inter[i_n] = a[i];
				common = 1;
				i_n++;
			}
		}
		if(!common)
		{
			u[u_n] = a[i];
			u_n++;
			diff[d_n] = a[i];
			d_n++;
		}
		
	}
	
	printf("A intersection B = {");
	for(i = 0; i < i_n ; i++)
		printf("%d,",inter[i]);
	printf("\b}\n");
	
	for(i = 0; i < n ; i++)
	{
		u[u_n] = b[i];
		u_n++;
		
	}

	
	
	printf("A union B = {");
	for(i = 0; i < u_n ; i++)
		printf("%d,",u[i]);
	printf("\b}\n");

	printf("A - B = {");
	for(i = 0; i < d_n ; i++)
		printf("%d,",diff[i]);
	printf("\b}\n");	
}
