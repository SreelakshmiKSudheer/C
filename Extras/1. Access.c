#include <stdio.h>

int main()
{
	//FILE *fp = fopen("Avengers.txt","r");
	
	FILE *fp = fopen("AvengersN.txt","w");
	
	char ch;
	
	
	/*
	while((ch = getc(fp)) != EOF)			// Reading
		putchar(ch);
	*/
	
	/** Writing **
	 * 		
	*/
	while((ch = getchar()) != EOF)
		putc(ch,fp);
	
	fclose(fp);
}
