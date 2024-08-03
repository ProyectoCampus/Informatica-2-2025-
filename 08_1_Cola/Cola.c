//---------------------------------------------------------------------------
//Se desea almacenar cierto número de enteros en una estructura de tipo Cola,
//diseñe una solución que permita, insertar y eliminar datos de la cola.
//---------------------------------------------------------------------------
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*declaracion de la cola*/
struct nodo
{
    int elemento;
    struct nodo *siguiente;
};
struct Cola
{
    struct nodo *frente;
    struct nodo *final;
};
/*declaracion de las funciones*/
void CrearCola(struct Cola *cola);
void insert (struct Cola *cola, int x);
int remover(struct Cola *cola);
int empty(struct Cola cola);
int main(void)
{
    int x, opc=8, j=0;
    struct Cola cola;
    CrearCola(&cola);
    system ("cls"); //clrscr ();
    while(opc!=3)
    {
        printf("\t\t\tMENU PRINCIPAL\n\n\n");
        printf("\t 1. Insertar\n");
        printf("\t 2. Eliminar\n");
        printf("\t 3. Salir\n");
        scanf("%d", &opc);
        switch(opc)
        {
        case 1:
            printf("Ingrese el numero a introducir:\n");
            scanf("%d", &x);
            insert(&cola, x);
            ++j;
            break;
        case 2:
            x=remover(&cola);
            if(!empty(cola)||j)
            {
                printf("%d fue eliminado de la cola\n", x);
                --j;
            }
            getch();
            break;
        }
        system ("cls"); //clrscr ();
    }
    getch();
    return 0;
}
/*definicion de las funciones*/
void CrearCola(struct Cola *cola)
{
    cola->frente=cola->final=NULL;
}
/*funcion que inserta el dato en la parte final de la cola*/
void insert (struct Cola *cola, int x)
{
    struct nodo *nuevo;
    nuevo=(struct nodo*)malloc(sizeof(struct nodo));
    nuevo->elemento=x;
    nuevo->siguiente=NULL;
    if(empty(*cola))
    {
        cola->frente=nuevo;
    }
    else
        cola->final->siguiente=nuevo;
    cola->final=nuevo;
}
/*elimina el elemento que esta al frente de la cola*/
int remover (struct Cola *cola)
{
    int temp=0;//=NULL;
    struct nodo *nuevo;
    if(!empty(*cola))
    {
        nuevo=cola->frente;
        temp=cola->frente->elemento;
        cola->frente=cola->frente->siguiente;
        free(nuevo);
    }
    else
        printf("ERROR, cola vacia, se puede eliminar\a\n");
    return (temp);
}
int empty(struct Cola cola)
{
    return (cola.frente==NULL);
}
