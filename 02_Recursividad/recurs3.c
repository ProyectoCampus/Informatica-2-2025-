//---------------------------------------------------------------------------
#include <stdio.h>
//---------------------------------------------------------------------------
long int fact(int);
//---------------------------------------------------------------------------
int main(void)
{
    int x;
    long int f;
    scanf("%d",&x);
    f=fact(x);
    printf("\n%d\t%ld",x,f);
    return 0;
}
//---------------------------------------------------------------------------
long int fact(int n)
{
    long int F=1;
    if(n>1)
        F=n*fact(n-1);
    return F;
}
//---------------------------------------------------------------------------

