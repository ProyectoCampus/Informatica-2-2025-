//---------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
#include<math.h>
//---------------------------------------------------------------------------
/* Se define el valor de p */
#define PI 3.14159
//---------------------------------------------------------------------------
/* Definicion de la estructura */
struct complejo
{
	float x,y;
};
//---------------------------------------------------------------------------
/* Prototipo de las fuinciones */
float modulo(struct complejo);
float argumento(struct complejo);
float absi(struct complejo);
float orde(struct complejo);
//---------------------------------------------------------------------------
int main(void)
{
	/* declaracion de las variables */
	char c;
	struct complejo A,B;
	do
	{
		clrscr();
		printf("\n\n\n\t\t\tPasaje de coordenadas");
		printf("\n\n\t\tIngrese la opcion\n\n\t\t (P) polar a cartesiana");
		printf("\n\n\t\t (C) cartesiana a polar ");
		printf("\n\n\t\t (S) salir              ");
		c=getche();
		switch(c)
		{
			/* eleccion de pasaje de polar a cartesiana */
		case 'c':
		case 'C':
			printf("\n\nIngrese el modulo : ");
			scanf("%f",&A.x);
			printf("\nIngrese el argumento : ");
			scanf("%f",&A.y);
			B.x=absi(A);
			B.y=orde(A);
			printf("\n\nLa absisa es : %f",B.x);
			printf("\n\nLa ordenada es : %f",B.y);
			printf("\n\nPresione una tecla para continuar");
			getch();
			break;
			/* Eleccion de pasaje de cartesiana a polar */
		case 'P':
		case 'p':
			printf("\n\nIngrese la absisa : ");
			scanf("%f",&A.x);
			printf("\nIngrese la ordenada : ");
			scanf("%f",&A.y);
			B.x=modulo(A);
			B.y=argumento(A);
			printf("\n\nEl modulo es : %f",B.x);
			printf("\n\nEl argumento es : %f",B.y);
			printf("\n\nPresione una tecla para continuar");
			getch();
			break;
			/* opcion de salir */
		case 'S':
		case 's':
			c=0;
		}
	}
	while(c);
    return 0;
}
//---------------------------------------------------------------------------
/* calculo de la absisa */
float absi(struct complejo A)
{
	float ab;
	ab=A.x*cos(A.y*PI/180);
	return(ab);
}
//---------------------------------------------------------------------------
/* calculo de la ordenada */
float orde(struct complejo A)
{
	float or;
	or=A.x*sin(A.y*PI/180);
	return(or);
}
//---------------------------------------------------------------------------
/* calculo del modulo */
float modulo(struct complejo A)
{
	float mo;
	mo=A.x*A.x+A.y*A.y;
	mo=sqrt(mo);
	return(mo);
}
//---------------------------------------------------------------------------
/* calculo del argumento */
float argumento(struct complejo A)
{
	float ar;
	ar=atan2(A.y,A.x);
	ar*=(180/PI);
	return(ar);
}
//---------------------------------------------------------------------------
