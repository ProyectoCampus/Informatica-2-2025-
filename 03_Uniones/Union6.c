//---------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
//---------------------------------------------------------------------------
/* MAX determina el largo máximo del vector */
#define MAX 100
//---------------------------------------------------------------------------
/* Se definen las estructuras y uniones a utitlizar */
struct coupe
{
	char nro_cil;
	int cilind,veloc_max;
	char marchas;
};
//---------------------------------------------------------------------------
struct sedan
{
	char puertas,color[10],familiar;
};
//---------------------------------------------------------------------------
struct cuotas
{
	int cant;
	float val;
};
//---------------------------------------------------------------------------
union clase
{
	struct coupe dat;
	struct sedan dat1;
};
//---------------------------------------------------------------------------
union fina
{
	float contado;
	struct cuotas pagos;
};
//---------------------------------------------------------------------------
struct autos
{
	char marca[10];
	int modelo;
	char tipo;
	union clase caract;
	char vendido,cont;
	union fina valor;
};
//---------------------------------------------------------------------------
/* Se declaran los prototipos de las funciones */
int ingreso(struct autos stock[],int);
void listado(struct autos stock[],int);
//---------------------------------------------------------------------------
int main(void)
{
	/* Se declaran las variables a utilizar */
	struct autos stock[MAX];
	int i,j=0;
	/* Impresión del menú de opciones */
	do
	{
		clrscr();
		printf("\n\t\t\t\tMenu principal");
		printf("\n\t1 - Ingreso de datos");
		printf("\n\t2 - Listado de datos");
		printf("\n\t3 - Salir");
		printf("\n\nIngrese una opción ( 1 - 3) ");
		scanf("%d",&i);
		switch(i)
		{
		case 1:
			j=ingreso(stock,j);
			break;
		case 2:
			listado(stock,j);
		}
	}
	while(i!=3);
    return 0;
}
//---------------------------------------------------------------------------
/* Función para permitir el ingreso de los datos */
int ingreso(struct autos stock[],int j)
{
	/* Declaración de las variables a utilizar para *
	* realizar el ingreso de los valores de tipo    *
	* "char" con formato numérico y para poder      *
	* ingresar los valores de tipo "float"          */
	int i;
	float f;
	/* Verifica que no se exceda el máximo del vector */
	if(j==MAX)
		return(j);
	/* Comienzo del ingreso de los datos */
	do
	{
		clrscr();
		printf("\n\t\t\tINGRESO DE DATOS");
		printf("\n\n\tMarca : ");
		fflush(stdin);
		gets(stock[j].marca);
		printf("\tModelo : ");
		scanf("%d",&stock[j].modelo);
		fflush(stdin);
		printf("\tTipo (C-S) : ");
		/* Ingreso de datos selectivo según el tipo elegido */
		do
		{
			stock[j].tipo=getche();
			if(stock[j].tipo=='C'||stock[j].tipo=='c')
			{
				printf("\n\tNumero de cilindros : ");
				/* Utilización de una variable auxiliar para poder *
				* ingresar un valor con formato numérico en una    *
				* variable de tipo "char"                          */
				scanf("%d",&i);
				stock[j].caract.dat.nro_cil=i;
				printf("\tCilindrada : ");
				scanf("%d",&stock[j].caract.dat.cilind);
				printf("\tVelocidad máxima : ");
				scanf("%d",&stock[j].caract.dat.veloc_max);
				printf("\tCantidad de marchas : ");
				scanf("%d",&i);
				stock[j].caract.dat.marchas=i;
			}
			if(stock[j].tipo=='S'||stock[j].tipo=='s')
			{
				printf("\n\tCantidad de puertas : ");
				scanf("%d",&i);
				stock[j].caract.dat1.puertas=i;
				fflush(stdin);
				printf("\tColor : ");
				gets(stock[j].caract.dat1.color);
				printf("\tFamiliar (S/N) : ");
				stock[j].caract.dat1.familiar=getche();
				printf("\n");
			}
		}
		while(!(stock[j].tipo!='C'||stock[j].tipo!='c'||stock[j].tipo!='S'||stock[j].tipo!='s'));
		printf("\tVendido (S/N) : ");
		/* Ingreso selectivo de los datos de venta */
		do
		{
			stock[j].vendido=getche();
			if(stock[j].vendido=='S'||stock[j].vendido=='s')
			{
				printf("\n\tVenta al contado (S/N) : ");
				do
				{
					stock[j].cont=getche();
					if(stock[j].cont=='S'||stock[j].cont=='s')
					{
						printf("\n\tValor : ");
						/* Utilización de una variable auxiliar para   *
						* permitir el ingreso de una variable de tipo  *
						*"float" en un vector de estructuras           */
						scanf("%f",&f);
						stock[j].valor.contado=f;
					}
					if(stock[j].cont=='N'||stock[j].cont=='n')
					{
						printf("\n\tNumero de cuotas : ");
						scanf("%d",&stock[j].valor.pagos.cant);
						printf("\tValor de la couta : ");
						scanf("%f",&f);
						stock[j].valor.pagos.val=f;
					}
				}
				while(!(stock[j].cont!='S'||stock[j].cont!='s'||stock[j].cont!='N'||stock[j].cont!='n'));
			}
			/* En caso de no haberse producido la venta se inicializan *
			* las variables a cero                                     */
			if(stock[j].vendido=='N'||stock[j].vendido=='n')
			{
				stock[j].valor.pagos.cant=0;
				stock[j].valor.pagos.val=0;
			}
		}
		while(!(stock[j].vendido!='S'||stock[j].vendido!='s'||stock[j].vendido!='N'||stock[j].vendido!='n'));
		printf("\n\t\tDesea ingresar otro vehículo (S/N) ");
		i=getche();
		j++;
	}
	/* Se comprueba que no se exceda el largo máximo del vector en el caso *
	* de que se quieran agregar mas datos que los permitidos               */
	while(i=='S'||i=='s'&&j<MAX);
	/* Se retorna el ultimo valor de la posición máxima de los valores *
	* ingresados                                                       */
	return(j);
}
//---------------------------------------------------------------------------
/* Función que permite la visualización de los datos */
void listado(struct autos stock[],int i)
{
	/* Declaración de las variables a utitlizar en la función */
	int j,k;
	/* Lazo para poder realizar la visualización de los datos dentro del *
	* rango ingresado                                                    */
	for(j=0;j<i;j++)
	{
		clrscr();
		printf("\n\n\tMarca : %s",stock[j].marca);
		printf("\tModelo : %d",stock[j].modelo);
		printf("\tTipo : %c\n",stock[j].tipo);
		/* Listado selectivo según el tipo */
		if(stock[j].tipo=='C'||stock[j].tipo=='c')
		{
			printf("\n\tNumero de cilindros : %d",stock[j].caract.dat.nro_cil);
			printf("\n\tCilindrada : %d",stock[j].caract.dat.cilind);
			printf("\n\tVelocidad máxima : %d",stock[j].caract.dat.veloc_max);
			printf("\n\tCantidad de marchas : %d",stock[j].caract.dat.marchas);
		}
		if(stock[j].tipo=='S'||stock[j].tipo=='s')
		{
			printf("\n\tCantidad de puertas : %d",stock[j].caract.dat1.puertas);
			printf("\n\tColor : %s",stock[j].caract.dat1.color);
			printf("\n\tFamiliar : %c",stock[j].caract.dat1.familiar);
		}
		printf("\n\n\tVendido : %c",stock[j].vendido);
		/* Listado selectivo de los datos de venta */
		if(stock[j].vendido=='S'||stock[j].vendido=='s')
		{
			if(stock[j].cont=='S'||stock[j].cont=='s')
				printf("\n\tValor : %.2f",stock[j].valor.contado);
			if(stock[j].cont=='N'||stock[j].cont=='n')
			{
				printf("\n\tNumero de cuotas : %d",stock[j].valor.pagos.cant);
				printf("\tValor de la cuota : %.2f",stock[j].valor.pagos.val);
			}
		}
		printf("\n\n\t\tDesea listar otro vehículo (S/N) ");
		k=getche();
		/* Selección que pewrmite seguir visualizando o no los datos *
		* del vector según la elección del operador                  */
		if(k=='N'||k=='n')
			return;
	}
}
//---------------------------------------------------------------------------
