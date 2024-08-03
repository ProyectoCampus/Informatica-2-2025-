//---------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
//---------------------------------------------------------------------------
#define MAX 100
//---------------------------------------------------------------------------
void Inicio(int *,int **,int *,int *,int *);
void Lee(int *,int **,int *,int *,int *);
//---------------------------------------------------------------------------
int main(void)
{
    int Llena=0,Vacia=1,Opcion,Cola[MAX],*Extrae=Cola,*Ingreso=Cola;
    do
    {
        system("CLS");
        printf("1 - Ingresa datos\n");
        printf("2 - Lee datos\n");
        printf("3 - Salir\n\n");
        printf("Ingrese una opcion ( 1 - 3 ) : ");
        fflush(stdin);
        scanf("%d",&Opcion);
        switch(Opcion)
        {
        case 1:
            Inicio(Cola,&Ingreso,&Llena,&Vacia,Extrae);
            break;
        case 2:
            Lee(Cola,&Extrae,&Vacia,&Llena,Ingreso);
            break;
        case 3:
            exit(0);
        }
    }
    while(Opcion!=3);
    return 0;
}
//---------------------------------------------------------------------------
void Inicio(int *Cola,int **Ingr,int *Llena,int *Vacia,int *Extr)
{
    if(*Llena)
    {
        system("CLS");
        printf("\n\nCola llena");
        printf("\n\nPresione una tecla para continuar\n");
        getch();
        return;
    }
    printf("\n\nIngrese el dato : ");
    scanf("%d",*Ingr);
    *Vacia=0;
    (*Ingr)++;
    if(*Ingr==Cola+MAX)
        *Ingr=Cola;
    if(*Ingr==Extr)
        *Llena=1;
}
//---------------------------------------------------------------------------
void Lee(int *Cola,int **Extr,int *Vacia,int *Llena,int *Ingr)
{
    if(*Vacia)
    {
        system("CLS");
        printf("\n\nCola vacia");
        printf("\n\nPresione una tecla para continuar\n");
        getch();
        return;
    }
    *Llena=0;
    printf("\n\nEl dato es : %d\n",**Extr);
    printf("\n\nPresione una tecla para continuar\n");
    getch();
    (*Extr)++;
    if(*Extr==Cola+MAX)
        *Extr=Cola;
    if(*Extr==Ingr)
        *Vacia=1;
}
//---------------------------------------------------------------------------
