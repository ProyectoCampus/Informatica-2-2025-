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
    printf("\n%d\t%ld\n",x,f);
    return 0;
}
//---------------------------------------------------------------------------
long int fact(int n)
{
    long int F=1;
    int i;
    for(i=n;i>1;i--)
        F*=i;
    return F;
}
//---------------------------------------------------------------------------

