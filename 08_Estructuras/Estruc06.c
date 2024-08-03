//---------------------------------------------------------------------------
#include<stdio.h>
//---------------------------------------------------------------------------
/* Definici�n de la estructura */
struct lista
{
	int art,cant;
	float prec;
};
//---------------------------------------------------------------------------
int main(void)
{
	/* Declaracion de dos variables del tipo estructura lista *
	* valcom significa valor de compra                       *
	* valven significa valor de venta                        */
	struct lista valcom,valven;
	/* Asignacion de valores a los campos de la variable valcom */
	valcom.art=56;
	valcom.cant=3;
	valcom.prec=23.59;
	/* Asignacion del valor de la variable valcom  *
	*  a la variable valven                      */
	valven=valcom;
	/* Verificacion de los valores de los campos de cada variable */
	printf("\n\n%d\t%d\t%.2f",valcom.art,valcom.cant,valcom.prec);
	printf("\n\n%d\t%d\t%.2f",valven.art,valven.cant,valven.prec);
	/* Adicion de un 15% al precio de venta */
	valven.prec*=1.15;
	/* Verificacion de los valores de los campos de cada variable */
	printf("\n\n%d\t%d\t%.2f",valcom.art,valcom.cant,valcom.prec);
	printf("\n\n%d\t%d\t%.2f",valven.art,valven.cant,valven.prec);
    return 0;
}
//---------------------------------------------------------------------------
