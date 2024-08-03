//---------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//---------------------------------------------------------------------------
struct Lis
{
    int Dato;
    struct Lis *Sig;
};
//---------------------------------------------------------------------------
void Ingresa(struct Lis **);
void Lee(struct Lis **);
void Borra(struct Lis **);
void Elimina(struct Lis **);
//---------------------------------------------------------------------------
int main(void)
{
    int Opcion;
    struct Lis *Inicio=NULL;
    for(;;)
    {
        system("cls");
        printf("\n1 - Ingresa datos\n");
        printf("2 - Lee datos\n");
        printf("3 - Borra datos\n");
        printf("4 - Salir\n\n");
        printf("Ingrese una opcion ( 1 - 4 ) : ");
        Opcion=getche();
        switch(Opcion)
        {
        case '1':
            Ingresa(&Inicio);
            break;
        case '2':
            Lee(&Inicio);
            break;
        case '3':
            Borra(&Inicio);
            break;
        case '4':
            Elimina(&Inicio);
            exit(0);
        }
    }
    return 0;
}
//---------------------------------------------------------------------------
void Ingresa(struct Lis **Principio)
{
    struct Lis *Actual=*Principio,*Nuevo;
    system("cls");
    if(!(Nuevo=(struct Lis *)malloc(sizeof(struct Lis))))
    {
        system("cls");
        printf("\n\nNo hay memoria disponible\n");
        printf("\n\nPresione una tecla para continuar\n");
        getch();
        return;
    }
    printf("\n\nIngrese el dato : ");
    scanf("%d",&Nuevo->Dato);
    Nuevo->Sig=NULL;
    if(!*Principio)
    {
        *Principio=Nuevo;
        return;
    }
    while(Actual->Sig)
        Actual=Actual->Sig;
    Actual->Sig=Nuevo;
}
//---------------------------------------------------------------------------
void Lee(struct Lis **Principio)
{
    struct Lis *Actual=*Principio;
    system("cls");
    while(Actual)
    {
        printf("\nEl dato es : %d",Actual->Dato);
        Actual=Actual->Sig;
    }
    printf("\n\nPresione una tecla para continuar\n");
    getch();
}
//---------------------------------------------------------------------------
void Borra(struct Lis **Principio)
{
    struct Lis *Actual=*Principio,*Anterior=*Principio;
    int b;
    system("cls");
    printf("\nIngrese el dato a borrar : ");
    scanf("%d",&b);
    while((Actual)&&(b!=Actual->Dato))
    {
        Anterior=Actual;
        Actual=Actual->Sig;
    }
    if((Actual)&&(*Principio==Actual))
    {
        *Principio=Actual->Sig;
        free(Actual);
        return;
    }
    if(Actual)
    {
        Anterior->Sig=Actual->Sig;
        free(Actual);
        return;
    }
    system("cls");
    printf("\nEl dato no ha sido encontrado");
    printf("\n\nPresione una tecla para continuar\n");
    getch();
}
//---------------------------------------------------------------------------
void Elimina(struct Lis **Principio)
{
    struct Lis *Actual;
    while(*Principio)
    {
        Actual=*Principio;
        *Principio=(*Principio)->Sig;
        free(Actual);
    }
}
//---------------------------------------------------------------------------
