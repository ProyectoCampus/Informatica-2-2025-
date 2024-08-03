//---------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
//---------------------------------------------------------------------------
/* Se define una estructura para guardar un numero complejo *
* el campo x puede ser la parte real o el modulo,           *
* el campo y puede ser la parte imaginaria o el argumento,  *
* el campo t es la forma en que esta expresado el complejo  */
struct complejo
{
	float x,y;
	char t;
};
//---------------------------------------------------------------------------
/* Se declaran los prototipos de las funciones a utilizar */
void sumar(void);
void restar(void);
void producto(void);
void cociente(void);
struct complejo ingreso(void);
struct complejo convacart(struct complejo);
struct complejo convapol(struct complejo);
void imprime(struct complejo,struct complejo,struct complejo);
//---------------------------------------------------------------------------
/* Comienzo de la funci�n main */
int main(void)
{
	char c;
	do
	{
		/* Menu de opciones para elegir el calculo */
		clrscr();
		printf("\n\n\n\t\t\tCalculos complejos");
		printf("\n\n\t\tIngrese una opcion");
		printf("\n\n\t\t (S) Suma");
		printf("\n\n\t\t (R) Resta");
		printf("\n\n\t\t (P) Producto");
		printf("\n\n\t\t (C) Cociente");
		printf("\n\n\t\t (Q) Salir\t");
		c=getche();
		switch(c)
		{
		case 's':
		case 'S':
			sumar();
			break;
		case 'r':
		case 'R':
			restar();
			break;
		case 'p':
		case 'P':
			producto();
			break;
		case 'c':
		case 'C':
			cociente();
			break;
		}
	}
	while((c!='q')&&(c!='Q'));
    return 0;
}
//---------------------------------------------------------------------------
/* Funci�n que realiza la suma de dos n�meros complejos */
void sumar(void)
{
	/* Se declaran las variables en donde se almacenan *
	* los n�meros complejos                            */
	struct complejo A,B,C;
	/* Se invoca la funci�n que permite el ingreso de *	* los datos                                       */
	A=ingreso();
	B=ingreso();
	clrscr();
	printf("\n\n");
	/* Se imprimen los datos de los operandos en la *
	* notaci�n en que fueron ingresados             */
	if(A.t=='P')
		printf("%f e^%f +",A.x,A.y);
	else
		printf("%f j%f +",A.x,A.y);
	if(B.t=='P')
		printf(" %f e^%f = ",B.x,B.y);
	else
		printf(" %f j%f = ",B.x,B.y);
	/* Cambio del tipo de notaci�n de cada operando *
	* si se hubiese ingresado en forma polar        */
	if(A.t=='P')
		A=convacart(A);
	if(B.t=='P')
		B=convacart(B);
	C.x=A.x+B.x;
	C.y=A.y+B.y;
	C.t='C';
	/* Se invoca a la funci�n de impresi�n de los resultados */
	imprime(C,A,B);
}
//---------------------------------------------------------------------------
/* Funci�n que realiza la resta de dos n�meros complejos */
void restar(void)
{
	/* Se declaran las variables en donde se almacenan *
	* los n�meros complejos                            */
	struct complejo A,B,C;
	/* Se invoca la funci�n que permite el ingreso de *	* los datos                                       */
	A=ingreso();
	B=ingreso();
	clrscr();
	printf("\n\n");
	/* Se imprimen los datos de los operandos en la *
	* notaci�n en que fueron ingresados             */
	if(A.t=='P')
		printf("%f e^%f -",A.x,A.y);
	else
		printf("%f j%f -",A.x,A.y);
	if(B.t=='P')
		printf(" %f e^%f = ",B.x,B.y);
	else
		printf(" %f j%f = ",B.x,B.y);
	/* Cambio del tipo de notaci�n de cada operando *
	* si se hubiese ingresado en forma polar        */
	if(A.t=='P')
		A=convacart(A);
	if(B.t=='P')
		B=convacart(B);
	C.x=A.x-B.x;
	C.y=A.y-B.y;
	C.t='C';
	/* Se invoca a la funci�n de impresi�n de los resultados */
	imprime(C,A,B);
}
//---------------------------------------------------------------------------
/* Funci�n que realiza el producto de dos n�meros complejos */
void producto(void)
{
	/* Se declaran las variables en donde se almacenan *
	* los n�meros complejos                            */
	struct complejo A,B,C;
	/* Se invoca la funci�n que permite el ingreso de *	* los datos                                       */
	A=ingreso();
	B=ingreso();
	clrscr();
	printf("\n\n");
	/* Se imprimen los datos de los operandos en la *
	* notaci�n en que fueron ingresados             */
	if(A.t=='P')
		printf("%f e^%f *",A.x,A.y);
	else
		printf("%f j%f *",A.x,A.y);
	if(B.t=='P')
		printf(" %f e^%f = ",B.x,B.y);
	else
		printf(" %f j%f = ",B.x,B.y);
	/* Cambio del tipo de notaci�n de cada operando *
	* si se hubiese ingresado en forma cartesiana   */
	if(A.t=='C')
		A=convapol(A);
	if(B.t=='C')
		B=convapol(B);
	C.x=A.x*B.x;
	C.y=A.y+B.y;
	C.t='P';
	/* Se invoca a la funci�n de impresi�n de los resultados */
	imprime(C,A,B);
}
//---------------------------------------------------------------------------
/* Funci�n que realiza el cociente de dos n�meros complejos */
void cociente(void)
{
	/* Se declaran las variables en donde se almacenan *
	* los n�meros complejos                            */
	struct complejo A,B,C;
	/* Se invoca la funci�n que permite el ingreso de *	* los datos                                       */
	A=ingreso();
	B=ingreso();
	clrscr();
	printf("\n\n");
	/* Se imprimen los datos de los operandos en la *
	* notaci�n en que fueron ingresados             */
	if(A.t=='P')
		printf("%f e^%f /",A.x,A.y);
	else
		printf("%f j%f /",A.x,A.y);
	if(B.t=='P')
		printf(" %f e^%f = ",B.x,B.y);
	else
		printf(" %f j%f = ",B.x,B.y);
	/* Cambio del tipo de notaci�n de cada operando *
	* si se hubiese ingresado en forma cartesiana   */
	if(A.t=='C')
		A=convapol(A);
	if(B.t=='C')
		B=convapol(B);
	C.x=A.x/B.x;
	C.y=A.y-B.y;
	C.t='P';
	/* Se invoca a la funci�n de impresi�n de los resultados */
	imprime(C,A,B);
}
//---------------------------------------------------------------------------
/* Funci�n que permite el ingreso de un numero complejo *
* esta retorna el valor de la estructura, la misma      *
* contiene la parte real e imaginaria o el modulo y el  *
* argumento y adem�s el tipo de la notaci�n en que      *
* esta escrito                                          */
struct complejo ingreso(void)
{
	/* Declara la variable en donde se va a almacenar  *
	* el numero complejo                               */
	struct complejo A;
	/* Variable auxiliar para evitar el problema de la *
	* funci�n "scanf"                                  */
	float aux;
	char c;
	do
	{
		/* Menu para seleccionar la forma en que  *
		* se ingresa el numero                    */
		clrscr();
		printf("\n\n\n\t\t\tIngreso del Valor");
		printf("\n\n\t\tIngrese la opcion");
		printf("\n\n\t\t (P) Notacion polar");
		printf("\n\n\t\t (C) Notacion cartesiana\t");
		c=getche();
		switch(c)
		{
			/* Ingreso en notaci�n polar */
		case 'p':
		case 'P':
			printf("\n\nIngrese el modulo : ");
			scanf("%f",&aux);
			A.x=aux;
			printf("\nIngrese el argumento : ");
			scanf("%f",&aux);
			A.y=aux;
			A.t=toupper(c);
			c=0;
			break;
			/* Ingreso en notaci�n cartesiana */
		case 'c':
		case 'C':
			printf("\n\nIngrese la parte real : ");
			scanf("%f",&aux);
			A.x=aux;
			printf("\nIngrese la parte imaginaria : ");
			scanf("%f",&aux);
			A.y=aux;
			A.t=toupper(c);
			c=0;
			break;
		}
	}
	while(c);
	/* Aqu� se retorna la variable de tipo "struct complejo */
	return(A);
}
//---------------------------------------------------------------------------
/* Funci�n que convierte un numero en notaci�n polar a notaci�n cartesiana */
struct complejo convacart(struct complejo A)
{
	/* Variable en donde se guardara el cambio de notaci�n */
	struct complejo B;
	B.x=A.x*cos(A.y*M_PI/180);
	B.y=A.x*sin(A.y*M_PI/180);
	B.t=A.t;
	/* Aqu� se retorna la variable de tipo "struct complejo */
	return(B);
}
//---------------------------------------------------------------------------
/* Funci�n que convierte un numero en notaci�n cartesiana a notaci�n polar */
struct complejo convapol(struct complejo A)
{
	/* Variable en donde se guardara el cambio de notaci�n */
	struct complejo B;
	B.x=sqrt((A.x*A.x)+(A.y*A.y));
	B.y=atan2(A.y,A.x)*(180/M_PI);
	B.t=A.t;
	/* Aqu� se retorna la variable de tipo "struct complejo */
	return(B);
}
//---------------------------------------------------------------------------
/* Funci�n que imprime el resultado del calculo realizado */
void imprime(struct complejo C,struct complejo A,struct complejo B)
{
	/* Verifica la notaci�n en que se ingresaron a los operandos *
	* Si ambos est�n expresados en la misma forma el resultado   *
	* se expresa en esa notaci�n, en caso contrario en la        *
	* notaci�n natural del calculo realizado                     */
	if(A.t==B.t)
	{
		switch(A.t)
		{
		case 'P':
			if(C.t=='C')
				C=convapol(C);
			printf(" %f e^%f ",C.x,C.y);
			break;
		case 'C':
			if(C.t=='P')
				C=convacart(C);
			printf(" %f j%f  ",C.x,C.y);
			break;
		}
	}
	else
		if(C.t=='p')
			printf(" %f e^%f  ",C.x,C.y);
		else
			printf(" %f j%f  ",C.x,C.y);
	printf("\n\nPresione una tecla para continuar ");
	getch();
}
//---------------------------------------------------------------------------
