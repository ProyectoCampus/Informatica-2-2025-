//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
//---------------------------------------------------------------------------
int main(void)
{
	FILE *fp;
	char str[50];
	int largo;
	scanf("%d",&largo);
	if(!(fp=fopen("arcstr.txt","r")))
	{
		printf("\n\nError de apertura\n\n");
		exit(1);
	}
	printf("\nLECTURA DEL ARCHIVO\n\n");
	while(!feof(fp))
	{
		fgets(str,largo,fp);
		puts(str);
	}
	fclose(fp);
    return 0;
}
//---------------------------------------------------------------------------
