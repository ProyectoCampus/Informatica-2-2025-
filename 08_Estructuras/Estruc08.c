//---------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
#include<string.h>
//---------------------------------------------------------------------------
#define N 100
#define PANT 20
//---------------------------------------------------------------------------
/* Define la la estructura a utilizar */
struct stock
{
	int art,cant;
	char desc[30];
};
//---------------------------------------------------------------------------
int main(void)
{
	int i,j;
	/* Declara un vector de estructuras y una variable auxiliar */
	struct stock prod[N],aux;
	clrscr();
	/* Lazo de ingreso de datos */
	for(i=0;i<N;i++)
	{
		printf("articulo[%d]\t",i+1);
		scanf("%d",&prod[i].art);
		printf("cantidad\t");
		scanf("%d",&prod[i].cant);
		/* Limpia el contenido del buffer de teclado */
		fflush(stdin);
		printf("descripcion\t");
		gets(prod[i].desc);
		printf("\n");
	}
	clrscr();
	/* rutina de ordenamiento del vector */
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			if(prod[j].cant>prod[i].cant)
			{
				/* Intercambio de los valores a ordenar */
				aux=prod[j];
				prod[j]=prod[i];
				prod[i]=aux;
			}
			/* Rutina de impresion de los datos en pantalla dividido por paginas */
	for(i=0;i<N;i+=PANT)
	{
		printf("Articulo\tCantidad\tDescripcion\n");
		for(j=0;(j<PANT)&&(i+j<N);j++)
			printf("%d\t\t%d\t\t%s\n",prod[i+j].art,prod[i+j].cant,prod[i+j].desc);
		printf("\n\tPresione una tecla para continuar");
		getch();
		clrscr();
	}
    return 0;
}
//---------------------------------------------------------------------------
