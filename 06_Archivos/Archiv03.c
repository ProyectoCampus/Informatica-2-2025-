//---------------------------------------------------------------------------
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//---------------------------------------------------------------------------
int main(void)
{
	FILE *fp;
	char c=0;
	fp=fopen("nuevoarc.txt","w");
	if(fp==NULL)
	{
		printf("\n\nError de apertura\n\n");
		exit(1);
	}
	while(c!='#')
	{
		c=getche();
		fputc(c,fp);
    }
    fclose(fp);
    return 0;
}
//---------------------------------------------------------------------------
