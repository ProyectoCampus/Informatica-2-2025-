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
float modulo(float,float);
float argumento(float,float);
float absi(float,float);
float orde(float,float);
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
			B.x=absi(A.x,A.y);
			B.y=orde(A.x,A.y);
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
			B.x=modulo(A.x,A.y);
			B.y=argumento(A.x,A.y);
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
float absi(float r,float f)
{
	float ab;
	ab=r*cos(f*PI/180);
	return(ab);
}
//---------------------------------------------------------------------------
/* calculo de la ordenada */
float orde(float r,float f)
{
	float or;
	or=r*sin(f*PI/180);
	return(or);
}
//---------------------------------------------------------------------------
/* calculo del modulo */
float modulo(float x,float y)
{
	float mo;
	mo=x*x+y*y;
	mo=sqrt(mo);
	return(mo);
}
//---------------------------------------------------------------------------
/* calculo del argumento */
float argumento(float x,float y)
{
	float ar;
	ar=atan2(y,x);
	ar*=(180/PI);
	return(ar);
}
//---------------------------------------------------------------------------
