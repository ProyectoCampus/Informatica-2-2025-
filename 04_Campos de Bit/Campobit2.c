//---------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//---------------------------------------------------------------------------
struct alfa
{
    unsigned char A:1;
    unsigned char B:2;
    unsigned char C:3;
};
//---------------------------------------------------------------------------
struct beta
{
    unsigned char A:3;
    unsigned char B:2;
    unsigned char C:1;
};
//---------------------------------------------------------------------------
struct gamma
{
    unsigned char A:5;
    unsigned char B:2;
    unsigned char C:3;
    unsigned char D:4;
};
//---------------------------------------------------------------------------
union delta
{
    struct alfa D;
    struct beta E;
    struct gamma F;
    char G[2];
};
//---------------------------------------------------------------------------
int main(void)
{
    char a;
    struct alfa b;
    union delta e;
    system("CLS");
    for(b.A=0,a=0;a<4;b.A++,a++)
        printf("%d   ",b.A);
    printf("\n");
    for(b.B=0,a=0;a<8;b.B++,a++)
        printf("%d   ",b.B);
    printf("\n");
    for(b.C=0,a=0;a<16;b.C++,a++)
        printf("%d   ",b.C);
    printf("\n\nPresione una tecla para continuar ");
    getch();
    system("CLS");
    e.G[0]=0;
    e.G[1]=0;
    printf("\ne.g[0]=%d   e.G[1]=%d",e.G[0],e.G[1]);
    e.D.A=1;
    e.D.B=2;
    e.D.C=5;
    printf("\ne.D.A=%d  e.D.A=%d  e.D.C=%d",e.D.A,e.D.B,e.D.C);
    printf("\ne.G[0]=%X  e.G[1]=%X",e.G[0],e.G[1]);
    e.E.C=1;
    e.E.B=2;
    e.E.A=5;
    printf("\ne.E.A=%d  e.E.A=%d  e.E.C=%d",e.E.A,e.E.B,e.E.C);
    printf("\ne.G[0]=%X  e.G[1]=%X",e.G[0],e.G[1]);
    e.F.A=18;
    e.F.B=2;
    e.F.C=5;
    e.F.D=11;
    printf("\ne.F.A=%X  e.F.A=%X  e.F.C=%X  e.F.C=%X",e.F.A,e.F.B,e.F.C,e.F.D);
    printf("\ne.G[0]=%X  e.G[1]=%X\n\n",e.G[0],e.G[1]);
    return 0;
}
//---------------------------------------------------------------------------
