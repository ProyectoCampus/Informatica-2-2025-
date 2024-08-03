//---------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
#include<string.h>
//---------------------------------------------------------------------------
/* Se definen la cantidad de empleados y el largo de los strings */
#define MAX 20
#define LARGO 30
//---------------------------------------------------------------------------
/* Se definen las estructuras que formaran los datos de los empleados */
struct dat_pers
{
	char nomb[LARGO],apell[LARGO];
};
//---------------------------------------------------------------------------
struct fecha
{
	int anio,mes,dia;
};
//---------------------------------------------------------------------------
struct domic
{
	char dire[LARGO],local[LARGO],prov[LARGO];
};
//---------------------------------------------------------------------------
struct tele
{
	unsigned int carac,numer;
};
//---------------------------------------------------------------------------
/* Estructura para guardar los datos de los empleados */
struct agend
{
	struct dat_pers datos;
	struct domic direccion;
	struct fecha cumple,antig;
	unsigned int leg;
	struct tele partic,movil;
};
//---------------------------------------------------------------------------
int main(void)
{
	/* Se declaran las variables */
	struct agend empleados[MAX];
	char i,resp,enc;
	unsigned int cons;
	/* Ingreso de los datos */
	for(i=0;i<MAX;i++)
	{
		clrscr();
		fflush(stdin);
		printf("\t\tIngrese los datos del personal\n\n");
		printf("\nApellido : ");
		gets(empleados[i].datos.apell);
		printf("\nNombre : ");
		gets(empleados[i].datos.nomb);
		printf("\nDireccion : ");
		gets(empleados[i].direccion.dire);
		printf("\nLocalidad : ");
		gets(empleados[i].direccion.local);
		printf("\nProvincia : ");
		gets(empleados[i].direccion.prov);
		printf("\nFecha de nacimiento ( dia/mes/agno) : ");
		scanf("%d/%d/%d",&empleados[i].cumple.dia,&empleados[i].cumple.mes,&empleados[i].cumple.anio);
		printf("\nFecha de ingreso ( dia/mes/agno) : ");
		scanf("%d/%d/%d",&empleados[i].antig.dia,&empleados[i].antig.mes,&empleados[i].antig.anio);
		printf("\nTelefono particular (caracteristica-numero) : ");
		scanf("%u-%u",&empleados[i].partic.carac,&empleados[i].partic.numer);
		printf("\nTelefono movil (caracteristica-numero) : ");
		scanf("%u-%u",&empleados[i].movil.carac,&empleados[i].movil.numer);
		printf("\nNumero de legajo : ");
		scanf("%u",&empleados[i].leg);
	}
	clrscr();
	resp='S';
	/* Consulta de un enpleado */
	while(resp=='S'||resp=='s')
	{
		enc=0;
		clrscr();
		printf("\n\nIngrese el numero de legajo : ");
		scanf("%u",&cons);
		/* Busqueda del empleado */
		for(i=0;i<MAX&&!enc;i++)
			if(cons==empleados[i].leg)
			{
				enc=1;
				i--;
			}
			/* Impresion de los datos del empleado */
			if(enc)
			{
				printf("El empleado %s,%s\n",empleados[i].datos.apell,empleados[i].datos.nomb);
				printf("se domicilia en %s,%s,%s\n",empleados[i].direccion.dire,empleados[i].direccion.local,\
					empleados[i].direccion.prov);
				printf("el telefono particular es : %u-%u \tel celular es 15-%u-%u",empleados[i].partic.carac,\
					empleados[i].partic.numer,empleados[i].movil.carac,empleados[i].movil.numer);
				printf("\nel ingreso en la empresa fue el %d/%d/%d,",empleados[i].antig.dia,empleados[i].antig.mes,\
					empleados[i].antig.anio);
				printf("su retiro se producira en el agno %d  ",empleados[i].cumple.anio+65);
			}
			else
				printf("Este legajo no existe");
			/* Nueva consulta */
			printf("\n\nDesea buscar otro empleado (S/N)? ");
			resp=getche();
	}
    return 0;
}
//---------------------------------------------------------------------------
