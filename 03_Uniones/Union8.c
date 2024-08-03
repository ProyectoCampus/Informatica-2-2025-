//---------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
//---------------------------------------------------------------------------
#define MAX 3
//---------------------------------------------------------------------------
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
int ingreso(struct autos stock[],int);
void listado(struct autos stock[],int);
//---------------------------------------------------------------------------
int main(void)
{
	struct autos stock[MAX];
	int i,j=0;
	do
	{
		clrscr();
		printf("\n\t\t\t\tMenu principal");
		printf("\n\t1 - Ingreso de datos");
		printf("\n\t2 - Listado de datos");
		printf("\n\t3 - Salir");
		printf("\n\nIngrese una opcion ( 1 - 4 ) ");
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
int ingreso(struct autos stock[],int j)
{
	int i;
	if(j==MAX)
		return(j);
	do
	{
		clrscr();
		printf("\n\t\t\tINGRESO DE DATOS");
		printf("\n\n\tMarca : ");
		fflush(stdin);
		gets(stock[j].marca);
		printf("\tModelo : ");
		scanf("%d",&stock[j].modelo);
		printf("\tTipo (C-S) : ");
		do
		{
			stock[j].tipo=getche();
			if(stock[j].tipo=='C'||stock[j].tipo=='c')
			{
				printf("\tNumero de cilindros : ");
				scanf("%d",&i);
				stock[j].caract.dat.nro_cil=i;
				printf("\tCilindrada : ");
				scanf("%d",&stock[j].caract.dat.cilind);
				printf("\tVelocidad maxima : ");
				scanf("%d",&stock[j].caract.dat.veloc_max);
				printf("\tCantidad de marchas : ");
				scanf("%d",&i);
				stock[j].caract.dat.marchas=i;
			}
			if(stock[j].tipo=='S'||stock[j].tipo=='s')
			{
				printf("\tCantidad de puertas : ");
				scanf("%d",&i);
				stock[j].caract.dat1.puertas=i;
				fflush(stdin);
				printf("\tColor : ");
				gets(stock[j].caract.dat1.color);
				printf("\tFamiliar (S/N) : ");
				stock[j].caract.dat1.familiar=getche();
			}
		}
		while(stock[j].tipo=='C'||stock[j].tipo=='c'||stock[j].tipo=='S'||stock[j].tipo=='s');
		printf("\tVendido (S/N) : ");
		do
		{
			stock[j].vendido=getche();
			if(stock[j].vendido=='S'||stock[j].vendido=='s')
			{
				printf("\tVenta al contado (S/N) : ");
				do
				{
					stock[j].cont=getche();
					if(stock[j].cont=='S'||stock[j].cont=='s')
					{
						printf("\tValor : ");
						scanf("%f",&stock[j].valor.contado);
					}
					if(stock[j].cont=='N'||stock[j].cont=='n')
					{
						printf("\tNumero de cuotas : ");
						scanf("%d",&stock[j].valor.pagos.cant);
						printf("\tValor de la couta : ");
						scanf("%f",&stock[j].valor.pagos.val);
					}
				}
				while(stock[j].cont=='S'||stock[j].cont=='s'||stock[j].cont=='N'||stock[j].cont=='n');
			}
			if(stock[j].vendido=='N'||stock[j].vendido=='n')
			{
				stock[j].valor.pagos.cant=0;
				stock[j].valor.pagos.val=0;
			}
		}
		while(stock[j].vendido=='S'||stock[j].vendido=='s'||stock[j].vendido=='N'||stock[j].vendido=='n');
		printf("\n\t\tDesea ingresar otro vehiculo (S/N) ");
		i=getche();
		j++;
	}
	while(i=='N'||i=='n'||j>=MAX);
	return(j);
}
//---------------------------------------------------------------------------
void listado(struct autos stock[],int j)
{
	int i;
	for(i=0;i<j;i++)
	{
		printf("\n\n\tMarca : %s",stock[j].marca);
		printf("\tModelo : %d",stock[j].modelo);
		printf("\tTipo : %c",stock[j].tipo);
		if(stock[j].tipo=='C'||stock[j].tipo=='c')
		{
			printf("\n\tNumero de cilindros : %d",stock[j].caract.dat.nro_cil);
			printf("\tCilindrada : %d",&stock[j].caract.dat.cilind);
			printf("\n\tVelocidad maxima : %d",stock[j].caract.dat.veloc_max);
			printf("\tCantidad de marchas : %d",stock[j].caract.dat.marchas);
		}
		if(stock[j].tipo=='S'||stock[j].tipo=='s')
		{
			printf("\tCantidad de puertas : %d",stock[j].caract.dat1.puertas);
			printf("\tColor : %s",stock[j].caract.dat1.color);
			printf("\tFamiliar (S/N) : %c",stock[j].caract.dat1.familiar);
		}
		printf("\n\tVendido : %c",stock[j].vendido);
		if(stock[j].vendido=='S'||stock[j].vendido=='s')
		{
			if(stock[j].cont=='S'||stock[j].cont=='s')
				printf("\tValor : %f",stock[j].valor.contado);
			if(stock[j].cont=='N'||stock[j].cont=='n')
			{
				printf("\tNumero de cuotas : %d",stock[j].valor.pagos.cant);
				printf("\tValor de la couta : %f",stock[j].valor.pagos.val);
			}
		}
		printf("\n\t\tDesea listar otro vehiculo (S/N) ");
		i=getche();
		if(i=='N'||i=='n')
			return;
	}
}
//---------------------------------------------------------------------------
