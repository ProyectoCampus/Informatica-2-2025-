//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
//---------------------------------------------------------------------------
int main(void)
{
	FILE *in;
	char c;
	long l;
	if(!(in=fopen("Archiv01.c","r")))
	{
		printf("\n\nError de apertura\n\n");
		exit(1);
	}
	printf("\n\n");
	l=ftell(in);
	printf("%ld",l);
	fseek(in,0,SEEK_END);
	printf("\n\n");
	l=ftell(in);
	printf("%ld",l);
	rewind(in);
	c=fgetc(in);
	printf("\n%c",c);
	fseek(in,200,SEEK_SET);
	c=fgetc(in);
	printf("\n%c",c);
	fseek(in,220,SEEK_SET);
	c=fgetc(in);
	printf("\n%c",c);
	fseek(in,1,SEEK_CUR);
	c=fgetc(in);
	printf("\n%c",c);
	fseek(in,0,SEEK_CUR);
	c=fgetc(in);
	printf("\n%c",c);
	fseek(in,0,SEEK_CUR);
	c=fgetc(in);
	printf("\n%c",c);
	fseek(in,-1,SEEK_CUR);
	c=fgetc(in);
	printf("\n%c",c);
	fseek(in,200,SEEK_SET);
	c=fgetc(in);
	printf("\n%c",c);
	fseek(in,200,SEEK_SET);
	c=fgetc(in);
	printf("\n%c",c);
	fseek(in,-150,SEEK_END);
	c=fgetc(in);
	printf("\n%c",c);
	fclose(in);
    return 0;
}
//---------------------------------------------------------------------------
