//---------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
//---------------------------------------------------------------------------
int main(void)
{
	int i,j;
    system("CLS");
	do
	{
        system("CLS");
		printf("\n\n\t\tIngrese un numero entero : ");
		scanf("%d",&i);
		printf("\n\t\tEl numero en hexadecimal es %04X",i);
		j=~i+1;
		printf("\n\n\t\tEl numero en complemento a dos es %d",j);
		printf("\n\n\t\tEn formato hexadecimal es %04X",j);
		printf("\n\n\nDesea continuar (S/N)? ");
	}
	while(getche()!='N');
	return 0;
}
//---------------------------------------------------------------------------
