//---------------------------------------------------------------------------
#include <stdio.h>
//---------------------------------------------------------------------------
int main(void)
{
    int i;
    int *pi;
    float v[5],*pf;
    i=0xA1B2C3D4;
    pi=&i;
    printf("%d\n",*pi);
    *pi=0xFFEEDDCC;
    for(pf=&v[0];pf<(&v[0]+5);pf++)
        scanf("%f",pf);
    printf("\n\n");
    for(pf=&v[0],i=0;i<5;i++)
        printf("\n%f",*(pf+i));
    printf("\n\n");
    for(i=0;i<5;i++)
        printf("\n%f",v[i]);
    printf("\n\n");
    pf=&v[0];
    for(i=0;i<5;i++)
        printf("\n%f",pf[i]);
    printf("\n\n");
    for(i=0;i<5;i++)
        printf("\n%f",*(v+i));
    printf("\n\n");
    return 0;
}
//---------------------------------------------------------------------------
