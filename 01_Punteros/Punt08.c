//---------------------------------------------------------------------------
#include<stdio.h>
//---------------------------------------------------------------------------
int main(void)
{
    int i,*pi;
    float j,*pj;
    char k,*pk;
    i=1000;
    pi=&i;
    j=3.18;
    pj=&j;
    k='c';
    pk=&k;
    printf("\n%d\t%p\t%f\t%p\t%c\t%p\n",i,pi,j,pj,k,pk);
    for(i=-5;i<6;i++,pi++,pj++,pk++)
    {
        printf("\n%d\t%p\t%f\t%p\t%c\t%p",i,pi,j,pj,k,pk);
        printf("\n%d\t%p\t%f\t%p\t%c\t%p\n\n",*pi,pi,*pj,pj,*pk,pk);
    }
    printf("\n\n");
    return 0;
}
//---------------------------------------------------------------------------
