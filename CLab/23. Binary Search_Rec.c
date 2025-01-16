#include <stdio.h>

int bin_search(int a[],int top, int bot, int key)
{
	int mid = (top + bot) / 2;
	
	if(top > bot)
		return -1;
	else if(a[mid] == key)
		return mid;
	else if(key > a[mid])
		return bin_search(a,top,mid - 1,key);
	else
		return bin_search(a,mid + 1,bot,key);
}

int main()
{
	int a[20],n,i,s,key;
	
	printf("How many numbers? ");
	scanf("%d",&n);
	
	printf("Enter elements: ");
	for(i = 0; i < n; i++)
		scanf("%d",&a[i]);
	
	printf("Enter the number to be searched: ");
	scanf("%d",&key);
	
	s = bin_search(a,0,n - 1,key);
	if(s == -1)
		printf("NOT present");
		
	else
		printf("PRESENT at the position %d",s+1);
}
