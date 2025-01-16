#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *a,n,i;

    printf("Enter no. of elements: ");
    scanf("%d",&n);

    a = (int*)malloc(n*sizeof(int));

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);

    printf("Elements are: \n");
    for(i = 0; i < n; i++)
        printf("%d ",a[i]);

    
}