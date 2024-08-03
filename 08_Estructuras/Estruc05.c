//---------------------------------------------------------------------------
/* Ejemplo de la utilización del operador punto */
//---------------------------------------------------------------------------
#include<stdio.h>
//---------------------------------------------------------------------------
/* Definición de la estructura a utilizar */
struct productos
{
	int codigo,cantidad;
	float precio;
};
//---------------------------------------------------------------------------
int main(void)
{
	struct productos lista;
	/* Asignación de valores a los campo de la estructura */
	lista.codigo=104;
	lista.cantidad=5;
	lista.precio=54.39;
	/* Impresión de los campos en pantalla */
	printf("\n%d\t%d\t%.2f$",lista.codigo,lista.cantidad,lista.precio);
    return 0;
}
//---------------------------------------------------------------------------
