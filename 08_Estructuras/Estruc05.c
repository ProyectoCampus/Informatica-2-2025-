//---------------------------------------------------------------------------
/* Ejemplo de la utilizaci�n del operador punto */
//---------------------------------------------------------------------------
#include<stdio.h>
//---------------------------------------------------------------------------
/* Definici�n de la estructura a utilizar */
struct productos
{
	int codigo,cantidad;
	float precio;
};
//---------------------------------------------------------------------------
int main(void)
{
	struct productos lista;
	/* Asignaci�n de valores a los campo de la estructura */
	lista.codigo=104;
	lista.cantidad=5;
	lista.precio=54.39;
	/* Impresi�n de los campos en pantalla */
	printf("\n%d\t%d\t%.2f$",lista.codigo,lista.cantidad,lista.precio);
    return 0;
}
//---------------------------------------------------------------------------
