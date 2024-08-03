//---------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
#include<math.h>
//---------------------------------------------------------------------------
union alfa
{
	int x;
	char y;
};
//---------------------------------------------------------------------------
union alfa ingreso(char);
void imprime(union alfa,char);
//---------------------------------------------------------------------------
int main(void)
{
	union alfa A;
	char c;
	do
	{
		clrscr();
		printf("\n\n\t\t\tIngrese una opción ");
		printf("\n\n (C) ingreso de un carácter");
		printf("\n\n (E) ingreso de un entero ");
		c=getche();
		printf("\n\n");
		A=ingreso(c);
		imprime(A,c);
		printf("\n\n\nDesea ingresar otro valor (S/N) ");
		c=getche();
	}
	while((c=='s')||(c=='S'));
    return 0;
}
//---------------------------------------------------------------------------
union alfa ingreso(char b)
{
	union alfa C;
	printf("Ingrese un ");
	if((b=='c')||(b=='C'))
	{
		printf(" carácter ");
		C.y=getche();
	}
	else
	{
		printf(" entero ");
		scanf("%d",&C.x);
	}
	printf("\n\n");
	return(C);
}
//---------------------------------------------------------------------------
void imprime(union alfa B,char c)
{
	if((c=='c')||(c=='C'))
		printf("\n\nUsted ingreso el carácter %c",B.y);
	else
		printf("\n\nUsted ingreso el entero %d",B.x);
}
//---------------------------------------------------------------------------
