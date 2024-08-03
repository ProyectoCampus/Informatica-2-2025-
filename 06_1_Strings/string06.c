//---------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
//---------------------------------------------------------------------------
int main(void)
{
	unsigned int n,valor,i,j;
	char res[64];
    printf("Ingrese un número positivo : ");
	scanf("%u",&n);
	valor=n;
	i=0;
	while(n&&(i<64))
	{
		res[i]=n%2+'0';
		n/=2;
		i++;
	}
	if(!i)
	{
		res[i]='0';
		i++;
	}
	res[i]='\0';
	i=strlen(res);
	for(n=0;n<i/2;n++)
	{
			j=res[n];
			res[n]=res[i-1-n];
			res[i-1-n]=j;
	}
	printf("\nNúmero: %u\t En binario: %s\n\n",valor,res);
	return 0;
}
//---------------------------------------------------------------------------
