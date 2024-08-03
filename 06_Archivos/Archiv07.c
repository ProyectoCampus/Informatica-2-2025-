//---------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//---------------------------------------------------------------------------
int main(void)
{
	FILE *fp;
	char str[50];
	if(!(fp=fopen("arcstr.txt","w")))
	{
		printf("\n\nError de apertura\n\n");
		exit(1);
	}
	printf("\nESCRITURA DEL ARCHIVO\n\n");
	gets(str);
	while(strcmp(str,"FIN"))
	{
		fputs(str,fp);
		gets(str);
	}
	fclose(fp);
	if(!(fp=fopen("arcstr.txt","r")))
	{
		printf("\n\nError de apertura\n\n");
		exit(1);
	}
	printf("\nLECTURA DEL ARCHIVO\n\n");
	while(!feof(fp))
	{
		fgets(str,5,fp);
		puts(str);
	}
	fclose(fp);
    return 0;
}
//---------------------------------------------------------------------------
