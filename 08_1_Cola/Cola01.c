//---------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
//---------------------------------------------------------------------------
#define MAX 100
//---------------------------------------------------------------------------
void Ingreso(int *,int *,float *);
void Lee(int *,int *,float *);
//---------------------------------------------------------------------------
int main(void)
{
    int Ingresa=0,Extrae=0,Opcion;
    float Cola[MAX];
    do
    {
        system("CLS");
        printf("1 - Ingresar datos\n");
        printf("2 - Leer datos\n");
        printf("3 - Salir\n\n");
        printf("Ingrese una opcion ( 1 - 3 ) : ");
        scanf("%d",&Opcion);
        switch(Opcion)
        {
        case 1:
            Ingreso(&Ingresa,&Extrae,Cola);
            break;
        case 2:
            Lee(&Ingresa,&Extrae,Cola);
            break;
        case 3:
            exit(0);
        }
    }
    while(Opcion!=3);
    return 0;
}
//---------------------------------------------------------------------------
void Ingreso(int *Escritura,int *Lectura,float *Cola)
{
    if(*Escritura==MAX)
    {
        system("CLS");
        printf("\n\nCola llena");
        printf("\nPresione una tecla para continuar");
        getch();
        return;
    }
    printf("\nIngrese el dato : ");
    scanf("%f",&Cola[*Escritura]);
    (*Escritura)++;
    printf("\n\n\nPresione una tecla para continuar");
    getch();
}
//---------------------------------------------------------------------------
void Lee(int *Escritura,int *Lectura,float *Cola)
{
    if(*Escritura==*Lectura)
    {
        system("CLS");
        printf("\n\nCola vacia");
        printf("\nPresione una tecla para continuar");
        getch();
        return;
    }
    printf("\nEl dato es : %f",Cola[*Lectura]);
    (*Lectura)++;
    printf("\n\n\nPresione una tecla para continuar");
    getch();
}
//---------------------------------------------------------------------------
