#include <stdio.h>

int main()
{
    FILE *fp;

	int regno = 62, mark = 99.987;
	char name[] = "Sreelakshmi K";
	
	
    
    fp = fopen("AvengersN.txt","w");
    
    fprintf(fp,"%5d %-20s%3d\n",regno,name,mark);		// writing to the file
    
    fclose(fp);
    
   
    
    fp = fopen("AnevegserN","r");
    
    fscanf(fp,"%5d%20c%3d",&regno,name,&mark);
    
    printf("Reg no. : %d\nName : %s\nMark : %d",regno,name,mark);
    
    fclose(fp);

}
