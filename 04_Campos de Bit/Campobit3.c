//---------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------
struct alfa
{
    unsigned d:5;
    unsigned s:2;
    unsigned v:1;
};
//---------------------------------------------------------------------------
struct bravo
{
    unsigned d:5;
    unsigned s:2;
};
//---------------------------------------------------------------------------
int main(void)
{
    struct alfa inp;
    struct bravo dat[20];
    int a;
    inp.v=rand()%2;
    for(a=0;a<20;a++)
    {
        inp.s=rand()%4;
        inp.d=rand()%32;
        while(!inp.v)
            inp.v=rand()%2;
        dat[a].d=inp.d;
        dat[a].s=inp.s;
        inp.v=rand()%2;
    }
    printf("CAN\tDAT\tCAN\tDAT\n");
    for(a=0;a<20;a++)
        printf("%d\t%d\t%d\t%d\n",dat[a].s,dat[a].d,dat[a+1].s,dat[a+1].d);
    return 0;
}
//---------------------------------------------------------------------------
