//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
//---------------------------------------------------------------------------
int bbin (int v[],int iz, int de, int valor);
//---------------------------------------------------------------------------
int main(void)
{
    int v[MAX]={2,4,6,8,10,12,14,16,18,20};
    int pos, valor,i;
    char op;
    do
    {
        system("cls");
        printf("El vector es:\n\n");
        for (i = 0; i < MAX; i++)
            printf("%d\t",v[i]);
        for (i=0;i<MAX;i++)
            printf("[%d]\t",i);
        printf("\n\nIngrese el valor a buscar: ");
        scanf("%d",&valor);
        pos=bbin(v,0,MAX-1,valor);
        if(pos>-1)
            printf("\n\nEl valor %d esta en la POS [%d] del vector",valor,pos);
        else
            printf("\n\nEl valor %d no existe en el vector... ",valor);
        printf("\n\nDesea buscar otro elemento (S/N): ");
        fflush(stdin);
        op=getchar();
    }
    while(op=='s'||op=='S');
    return 0;
}
//---------------------------------------------------------------------------
int bbin (int v[],int iz, int de, int valor)
{
    int med;
    while(iz<=de)
    {
        med=(iz+de)/2;
        if(valor==v[med])
            return med;
        if(valor>v[med])
            iz=med+1;
        else
            de=med-1;
    }
    return -1;
}
//---------------------------------------------------------------------------
