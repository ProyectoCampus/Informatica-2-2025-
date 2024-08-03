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
	while(c!='#')
	{
		c=fgetc(fp);
		putchar(c);
    }
    fclose(fp);
    return 0;
}
//---------------------------------------------------------------------------
