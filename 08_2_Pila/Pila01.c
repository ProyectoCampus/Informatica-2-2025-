//---------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//---------------------------------------------------------------------------
#define MAX 100
//---------------------------------------------------------------------------
void Inicio(int *,float *);
void Lee(int *,float *);
//---------------------------------------------------------------------------
int main(void)
{
    int Indice=0,Opcion;
    float Pila[MAX];
    do
    {
        system("CLS");
        printf("1 - Ingresa datos\n");
        printf("2 - Lee datos\n");
        printf("3 - Salir\n\n");
        printf("Ingrese una opcion ( 1 - 3 ) : ");
        scanf("%d",&Opcion);
        switch(Opcion)
        {
        case 1:
            Inicio(&Indice,Pila);
            break;
        case 2:
            Lee(&Indice,Pila);
            break;
        case 3:
            exit(0);
        }
    }
    while(Opcion!=3);
    return 0;
}
//---------------------------------------------------------------------------
void Inicio(int *Indice,float *Pila)
{
    if(*Indice==MAX)
    {
        system("CLS");
        printf("\n\nPila llena");
        printf("\n\nPresione una tecla para continuar\n");
        getch();
        return;
    }
    system("CLS");
    printf("\nIngrese el dato : ");
    scanf("%f",&Pila[*Indice]);
    (*Indice)++;
}
//---------------------------------------------------------------------------
void Lee(int *Indice,float *Pila)
{
    if(!*Indice)
    {
        system("CLS");
        printf("\n\nPila vacia");
        printf("\n\nPresione una tecla para continuar\n");
        getch();
        return;
    }
    (*Indice)--;
    printf("\nEl dato es : %f",Pila[*Indice]);
    printf("\n\nPresione una tecla para continuar\n");
    getch();
}
//---------------------------------------------------------------------------
