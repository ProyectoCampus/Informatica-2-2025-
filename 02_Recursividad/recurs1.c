//---------------------------------------------------------------------------
#include<stdio.h>
//---------------------------------------------------------------------------
int f(int);
//---------------------------------------------------------------------------
int main(void)
{
    int i;
    i=f(3);
    printf("\ni=%d",i);
    return 0;
}
//---------------------------------------------------------------------------
int f(int i)
{
    printf("\ni=%d",i);
    i=f(i+1);
    return i;
}
//---------------------------------------------------------------------------