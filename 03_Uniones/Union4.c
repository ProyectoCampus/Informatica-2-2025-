//---------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
#include<math.h>
//---------------------------------------------------------------------------
/* Se define una unión con dos campos uno "int" y el otro "char" */
union alfa
{
	int x;
	char y;
};
//---------------------------------------------------------------------------
/* Se declaran los prototipos de las funciones */
union alfa ingreso(char);
void imprime(union alfa,char);
//---------------------------------------------------------------------------
int main(void)
{
	/* Se declaran las variables */
	union alfa A;
	char c;
	do
	{
		/* Menú de opciones */
		clrscr();
		printf("\n\n\t\t\tIngrese una opción ");
		printf("\n\n (C) ingreso de un carácter");
		printf("\n\n (E) ingreso de un entero ");
		c=getche();
		printf("\n\n");
		/* Se invoca a la función "ingreso" */
		A=ingreso(c);
		/* Se invoca a la función "imprime" */
		imprime(A,c);
		printf("\n\n\nDesea ingresar otro valor (S/N) ");
		c=getche();
	}
	while((c=='s')||(c=='S'));
    return 0;
}
//---------------------------------------------------------------------------
/* Se define a la función "ingreso"  *
* devuelve una unión de tipo "alfa"  *
* recibe un "char"                   */
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
	/* Devuelve el valor de la unión */
	return(C);
}
//---------------------------------------------------------------------------
/* Se define la función "imprime"            *
* recibe una unión de tipo alfa llamada "B"  *
* y un char denominado "c", devuelve "void"  */
void imprime(union alfa B,char c)
{
	if((c=='c')||(c=='C'))
		printf("\n\nUsted ingreso el carácter %c",B.y);
	else
		printf("\n\nUsted ingreso el entero %d",B.x);
}
//---------------------------------------------------------------------------
