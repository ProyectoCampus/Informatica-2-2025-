//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
//---------------------------------------------------------------------------
int main(void)
{
	FILE *fp;
	char c;
	fp=fopen("nuevoarc.txt","r");
	if(fp==NULL)
	{
		printf("\n\nError de apertura\n\n");
		exit(1);
	}
	do
	{
		c=fgetc(fp);
		putchar(c);
	}
	while(!feof(fp));
	fclose(fp);
    return 0;
}
//---------------------------------------------------------------------------
