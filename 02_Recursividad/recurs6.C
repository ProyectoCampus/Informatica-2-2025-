//---------------------------------------------------------------------------
#include<stdio.h>
//---------------------------------------------------------------------------
int main(void)
{
    int vec[]={2,4,5,7,8,12,14,17,21,23,24,32,43,54,65,88};
    int X;
    int pos,longitud;
    system("CLS");
    printf("Ingrese el valor a buscar  ");
    scanf("%d",&X);
    longitud=sizeof(vec)/sizeof(tipo);
    pos=buscar(vec,0,longitud-1,X);
    if(pos<0)
        printf("\n\nNo se encontro");
    else
        printf("\n\nLa posicion del valor buscado es %d",pos);
    return 0;
}
//---------------------------------------------------------------------------
buscar(int vector[],int inf,int sup,int X)
{
    int mitad;
    int posicion;
    if((inf>=sup)&&(vector[inf]!=X))
        return -1;
    mitad=(inf+sup)/2;
    if(vector[mitad]==X)
        return mitad;
    if(X>vector[mitad])
        return buscar(vector,mitad+1,sup,X);
    return buscar(vector,inf,mitad-1,X);
}
//---------------------------------------------------------------------------
