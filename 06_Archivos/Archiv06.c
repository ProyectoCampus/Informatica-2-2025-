//---------------------------------------------------------------------------
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//---------------------------------------------------------------------------
int main(void)
{
	FILE *in,*out;
	char c;
	if(!(in=fopen("Archiv1.c","r")))
	{
		printf("\n\nError de apertura\n\n");
		exit(1);
	}
	if(!(out=fopen("Arc.c","w")))
	{
		printf("\n\nError de apertura\n\n");
		exit(1);
	}
	printf("\n\n");
	while(!feof(in))
	{
		c=fgetc(in);
		fputc(c,out);
		printf("%c",c);
	}
	fclose(in);
	fclose(out);
	getch();
    return 0;
}
//---------------------------------------------------------------------------
