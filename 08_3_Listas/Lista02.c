//---------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
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
void Busca(struct Lis **);
//---------------------------------------------------------------------------
int main(void)
{
    int Opcion;
    struct Lis *Inicio=NULL;
    for(;;)
    {
        system("cls");
        printf("1 - Ingresa datos\n");
        printf("2 - Lee datos\n");
        printf("3 - Borrar datos\n");
        printf("4 - Buscar datos\n");
        printf("5 - Salir\n\n");
        printf("Ingrese una opcion ( 1 - 5 ) : ");
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
            Busca(&Inicio);
            break;
        case '5':
            exit(0);
        }
    }
    return 0;
}
//---------------------------------------------------------------------------
void Ingresa(struct Lis **Principio)
{
    struct Lis *Actual,*Nuevo,*Anterior;
    if(!(Nuevo=(struct Lis *)malloc(sizeof(struct Lis))))
    {
        printf("\n\nNo hay memoria disponible\n");
        printf("\n\nPresione una tecla para continuar\n");
        getch();
        return;
    }
    printf("\n\nIngrese el dato : ");
    scanf("%d",&Nuevo->Dato);
    if(!*Principio)
    {
        *Principio=Nuevo;
        Nuevo->Sig=NULL;
        return;
    }
    Anterior=*Principio;
    Actual=*Principio;
    while((Actual->Dato>Nuevo->Dato)&&Actual)
    {
        Anterior=Actual;
        Actual=Actual->Sig;
    }
    if(!Actual)
    {
        Anterior->Sig=Nuevo;
        Nuevo->Sig=NULL;
        return;
    }
    if(Anterior==Actual)
    {
        *Principio=Nuevo;
        Nuevo->Sig=Anterior;
        return;
    }
    Anterior->Sig=Nuevo;
    Nuevo->Sig=Actual;
}
//---------------------------------------------------------------------------
void Lee(struct Lis **Principio)
{
    struct Lis *Actual=*Principio;
    while(Actual)
    {
        printf("\nEl dato es : %d\n",Actual->Dato);
        Actual=Actual->Sig;
        printf("\n\nPresione una tecla para continuar\n");
        getch();
    }
}
//---------------------------------------------------------------------------
void Borra(struct Lis **Principio)
{
    struct Lis *Actual,*Anterior;
    int Valor;
    char Opcion;
    printf("\nIngrese el dato a borrar : ");
    scanf("%d",&Valor);
    Actual=*Principio;
    Anterior=*Principio;
    while((Valor!=Actual->Dato)&&Actual)
    {
        Anterior=Actual;
        Actual=Actual->Sig;
    }
    if(Actual)
    {
        printf("\nEl dato es : %d\n\n",Actual->Dato);
        printf("\n\nDesea eliminar este dato (S / N) ");
        Opcion=toupper(getche());
        if(Opcion=='S')
        {
            if(Anterior==Actual)
            {
                *Principio=Actual->Sig;
                free(Actual);
                return;
            }
            Anterior->Sig=Actual->Sig;
            free(Actual);
            return;
        }
        return;
    }
    printf("\nEl dato no ha sido encontrado");
    printf("\n\nPresione una tecla para continuar\n");
    getch();
}
//---------------------------------------------------------------------------
void Busca(struct Lis **Principio)
{
    struct Lis *Actual;
    int Valor;
    printf("\nIngrese el dato a buscar : ");
    scanf("%d",&Valor);
    Actual=*Principio;
    while((Valor!=Actual->Dato)&&Actual)
        Actual=Actual->Sig;
    if(Actual)
    {
        printf("\nEl dato es : %d\n\n",Actual->Dato);
        printf("\n\nPresione una tecla para continuar\n");
        getch();
        return;
    }
    printf("\nEl dato no ha sido encontrado");
    printf("\n\nPresione una tecla para continuar\n");
    getch();
}
//---------------------------------------------------------------------------
