//---------------------------------------------------------------------------
#include <stdio.h>
//---------------------------------------------------------------------------
int main(void)
{
	char c[5],*pc[5],*aux;
	int i,j;
	for(i=0;i<5;i++)
		c[i]=getche();
	for(i=0;i<5;i++)
		pc[i]=&c[i];
	for(i=0;i<4;i++)
		for(j=i+1;j<5;j++)
			if(*pc[i]>*pc[j])
			{
				aux=pc[i];
				pc[i]=pc[j];
				pc[j]=aux;
			}
	printf("\n");
	for(i=0;i<5;i++)
		printf("%c   %c\n",*pc[i],c[i]);
	return 0;
}
//---------------------------------------------------------------------------