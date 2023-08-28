#include <stdio.h>

int main()
{
	char c;
	
	FILE *fp ;
	
	fp = fopen("AvengersN.txt","r");
	
	while(fscanf(fp,"%c",&c) != EOF)
		putchar(c);
		
	fclose(fp);
}
