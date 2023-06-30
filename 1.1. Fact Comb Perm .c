#include <stdio.h>

unsigned long int fact(int);
long int permut();
int comb();

int main()
{
    int num ,n;
    
    printf("Choose the number corresponding to your type of problem within the cases given below:\n");
    printf("1. Number of possible ways in which a selected number of objects can be arranged among themselves.\n");
    printf("2. Number of ways to arrange n things taken r at a time.\n");
    printf("3. Number of combination/selecting n things r at a time.\n");

	printf("Enter: ");
    scanf("%d",&num);

    switch (num)
    {
        case 1: printf("Enter a counting number: ");
                scanf("%d",&n);
                printf("%d! = %lu",n,fact(n));
                break;
        case 2: printf("nPr = %ld",permut());
                break;
                
        case 3: printf("nCr = %d",comb());
                break;
    
        default: printf("Invalid accornding to this program");
        
    }

    
}

unsigned long int fact(int n)
{
    

    if(n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

long int permut()
{
	int n,r;
    
    printf("Enter toatl number of things(n): ");
    scanf("%d",&n);

    printf("Enter how many at a time(r): ");
    scanf("%d",&r);

    return fact(n)/fact(n - r);

    
}

int comb()
{
    int n,r;

    printf("Enter toatl number of things(n): ");
    scanf("%d",&n);

    printf("Enter how many at a time(r): ");
    scanf("%d",&r);

    return fact(n)/(fact(n - r ) * fact(r));
}
