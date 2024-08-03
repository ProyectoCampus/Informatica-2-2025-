//---------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//---------------------------------------------------------------------------
struct x
{
	int i;
	float f;
	char c,str[10];
};
//---------------------------------------------------------------------------
int main(void)
{
	FILE *fp;
	char str[50],c='x',str1[50],c1;
	int i,j,k[10];
	float f=1.1,g[10];
	struct x st,st1;
	st.i=11;
	st.f=3.14159;
	st.c='J';
	strcpy(st.str,"prueba");
	strcpy(str,"PRUEBA");
	if(!(fp=fopen("arch.bin","wb")))
	{
		printf("\n\nError de apertura\n\n");
		exit(1);
	}
	printf("\nESCRITURA DEL ARCHIVO\n\n");
	fwrite(str,sizeof(str),1,fp);
	printf("%s\n",str);
	for(i=0;i<10;i++)
	{
		fwrite(&i,sizeof(i),1,fp);
		printf("%d\n",i);
	}
	fwrite(&c,sizeof(char),1,fp);
	printf("%c\n",c);
	for(i=0;i<10;i++)
	{
		fwrite(&f,sizeof(float),1,fp);
		printf("%f\n",f);
		f*=1.1;
	}
	fwrite(&st,sizeof(struct x),1,fp);
	printf("\n%c,%d,%f,%s\n",st.c,st.i,st.f,st.str);
	fclose(fp);
	if(!(fp=fopen("arch.bin","rb")))
	{
		printf("\n\nError de apertura\n\n");
		exit(1);
	}
	printf("\nLECTURA DEL ARCHIVO\n\n");
	fread(str1,sizeof(str1),1,fp);
	puts(str1);
	printf("\n");
	fread(k,sizeof(int),10,fp);
	for(j=0;j<10;j++)
		printf("%d\n",k[j]);
	printf("\n");
	fread(&c1,sizeof(char),1,fp);
	printf("%c",c1);
	printf("\n");
	fread(g,sizeof(float),10,fp);
	for(i=0;i<10;i++)
		printf("%f\n",g[i]);
	fread(&st1,sizeof(struct x),1,fp);
	printf("\n%c,%d,%f,%s\n",st1.c,st1.i,st1.f,st1.str);
	fclose(fp);
    return 0;
}
//---------------------------------------------------------------------------
