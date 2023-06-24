#include <stdio.h>

int main()
{
	int a[20],b[20],merge[40],m,n,i,j,mc = 0,rem;
	
	printf("Enter the number of elements in set A: ");
	scanf("%d",&m);
	
	printf("\nEnter the number of elements in set B: ");
	scanf("%d",&n);
	
	printf("Enter the elements of set A: ");
	for(i = 0; i < m; i++)
		scanf("%d",&a[i]);
		
	printf("Enter the elements of set B: ");
	for(i = 0; i < n; i++)
		scanf("%d",&b[i]);

	i = 0, j = 0;
	
	while(i < m && j < n)
	{
		if(a[i] == b[j])
		{
			merge[mc++] = a[i++];
			j++;
		}
		else if(a[i] < b[j])
			merge[mc++] = a[i++];
		else
			merge[mc++] = b[j++];
	}
	
	for(rem = i; rem < m ; rem++, mc++)
		merge[mc] = a[rem];
		
	for(rem = j; rem < n ; rem++, mc++)
		merge[mc] = b[rem];
		
	printf("The merged set in sorted order: ");
	for(i = 0; i < mc; i++)
		printf("%d ",merge[i]);
		
	printf("\n");
}
