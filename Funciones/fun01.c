//---------------------------------------------------------------------------
#include <stdio.h>
//---------------------------------------------------------------------------
int cuad(int);
//---------------------------------------------------------------------------
int main(void)
{
    int i,j,k;
    i=2;
    while(i<10)
    {
        j=cuad(i);
        printf("\n%d",i);
        i++;
        k=cuad(j);
        printf("\t%d\t%d\n",j,k);
    }
    return 0;
}
//---------------------------------------------------------------------------
int cuad(int x)
{
    int y;
    y=x*x;
    return y;
}
//---------------------------------------------------------------------------
