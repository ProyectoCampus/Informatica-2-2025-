//---------------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
#include<conio.h>
//---------------------------------------------------------------------------
/* Define a la estructura "pers" */
struct pers
{
	char nom[20],apel[20];
	char edad;
	float peso,altura;
};
//---------------------------------------------------------------------------
int main(void)
{
	/* Declara una variable del tipo struct pers llamada "habit" */
	struct pers habit;
	/* Declara una variable auxiliar */
	float aux;
	clrscr();
	/* Ingreso de los datos a la estructura */
	printf("\n\t\tiNGRESE LOS DATOS DE LA PERSONA\n\n");
	printf("Nombre : ");
	gets(habit.nom);
	printf("\nApelllido : ");
	gets(habit.apel);
	printf("\nEdad : ");
	/* Ingresa el valor de la edad como valor numerico utilizando el      *
	* formato de control "%d" y no el formato de control "%c" que se      *
	* utilizaria para ingresar un caracter desde el teclado sin importar  *
	* que la variable a la que se ingrese dicho valor sea del tipo "int"  *
	* o del tipo "char" debido a que ambos tipos son enteros              */
	scanf("%d",&habit.edad);
	printf("\nPeso : ");
	scanf("%f",&aux);
	habit.peso=aux;
	printf("\nAltura : ");
	scanf("%f",&aux);
	habit.altura=aux;
	printf("\n\n\t\tPresione una tecla para continuar");
	/* Espera para visualizar los datos en pantalla */
	getch();
	clrscr();
	/* Impresion de los datos en pantalla con un formato distinto */
	printf("\n\n\t\tDatos de %s,%s",habit.apel,habit.nom);
	printf("\n\n\n\tEdad : %d\t\tAltura : %1.2f",habit.edad,habit.altura);
	printf("\t\tPeso : %2.2f",habit.peso);
    return 0;
}
//---------------------------------------------------------------------------
