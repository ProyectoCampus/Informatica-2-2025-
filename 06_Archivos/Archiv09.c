//---------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//---------------------------------------------------------------------------
int main(void)
{
	FILE *fp;
	char str[50];
	if(!(fp=fopen("arcstr1.txt","w")))
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
		fputc('\n',fp);
	}
	fclose(fp);
	if(!(fp=fopen("arcstr1.txt","r")))
	{
		printf("\n\nError de apertura\n\n");
		exit(1);
	}
	printf("\nLECTURA DEL ARCHIVO\n\n");
	while(!feof(fp))
	{
		fgets(str,50,fp);
		puts(str);
	}
	fclose(fp);
    return 0;
}
//---------------------------------------------------------------------------
