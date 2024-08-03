//---------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//---------------------------------------------------------------------------
int main(void)
{
	FILE *fp;
	char str[50],c='x';
	int i,j;
	float f=1.1;
	strcpy(str,"PRUEBA");
	if(!(fp=fopen("arch2.txt","w")))
	{
		printf("\n\nError de apertura\n\n");
		exit(1);
	}
	printf("\nESCRITURA DEL ARCHIVO\n\n");
	fprintf(fp,"%s",str);
	printf("%s\n",str);
	for(i=0;i<10;i++)
	{
		fprintf(fp,"%d",i);
		printf("%d\n",i);
	}
	fprintf(fp,"%c",c);
	printf("%c\n",c);
	for(i=0;i<10;i++)
	{
		fprintf(fp,"%f",f);
		printf("%f\n",f);
		f*=1.1;
	}
	fclose(fp);
	if(!(fp=fopen("arch2.txt","r")))
	{
		printf("\n\nError de apertura\n\n");
		exit(1);
	}
	printf("\nLECTURA DEL ARCHIVO\n\n");
	fscanf(fp,"%s",str);
	puts(str);
	printf("\n");
	for(j=0;j<10;j++)
	{
		fscanf(fp,"%d",&i);
		printf("%d",i);
	}
	printf("\n");
	fscanf("%c",&c);
	printf("%c",c);
	printf("\n");
	for(i=0;i<10;i++)
	{
		fscanf(fp,"%f",&f);
		printf("%f",f);
	}
	fclose(fp);
    return 0;
}
//---------------------------------------------------------------------------
