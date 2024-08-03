//---------------------------------------------------------------------------
/* Programa de ejemplo de declaraci¢n de estructuras */
//---------------------------------------------------------------------------
#include<stdio.h>
#include<math.h>
//---------------------------------------------------------------------------
/* Se declaran las estructuras solo con la etiqueta */
struct complejo
{
	float x,y;
};
//---------------------------------------------------------------------------
struct resultado
{
	float mod,arg;
};
//---------------------------------------------------------------------------
int main(void)
{
	/* Se declaran las variables que son estructuras */
	struct complejo a,b;
	struct resultado res;
	a.x=5;
	a.y=7;
	/* Ingreso del numero a */
	b.x=2;
	b.y=8;
	/* Ingreso del numero b */
	/* Calculo de la suma de los n£meros complejos a y b */
	res.mod=sqrt(pow((a.x+b.x),2)+pow((a.y+b.y),2));
	res.arg=atan2((a.x+b.x),(a.y+b.y));
	/* Impresi¢n de los resultados */
	printf("\nEl modulo de la suma de %2.2f,%2.2f y %2.2f,%2.2f es:",a.x,a.y,b.x,b.y);
	printf("\t%2.2f\n\n",res.mod);
	printf("\nEl argumento de la suma de %2.2f,%2.2f y %2.2f,%2.2f es:",a.x,a.y,b.x,b.y);
	printf("\t%2.2f\n\n",res.arg);
    return 0;
}
//---------------------------------------------------------------------------
