//---------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
//---------------------------------------------------------------------------
void conv(unsigned char,char,unsigned char,unsigned char);
void conv1(char,unsigned char,unsigned char);
void conv2(unsigned char,char,unsigned char,unsigned char);
void pasbin(unsigned char);
//---------------------------------------------------------------------------
int main(void)
{
    unsigned char a,b,c;
    int i;
    do
    {
        system("CLS");
        printf("\n\n\t\tIngrese un numero entero : ");
        scanf("%d",&i);
        a=i;
        printf("\n\t\tIngrese otro numero entero : ");
        scanf("%d",&i);
        b=i;
        printf("\n\n\t\t%d | %d = %d",a,b,a|b);
        conv(a,'|',b,a|b);
        printf("\n\n\t\t%d & %d = %d",a,b,a&b);
        conv(a,'&',b,a&b);
        printf("\n\n\t\t%d ^ %d = %d",a,b,a^b);
        conv(a,'^',b,a^b);
        printf("\n\n\t\t~%d = %d",a,~a);
        conv1('~',a,~a);
        printf("\n\n\t\t~%d = %d",b,~b);
        conv1('~',b,~b);
        printf("\n\n\t\t\tPresione una tecla para continuar");
        getch();
        system("CLS");
        printf("\n\n");
        for(i=0;i<9;i++)
        {
            c=a>>i;
            printf("\n\t\t%d >> %d = %d ",a,i,c);
            conv2(a,'>',i,c);
        }
        printf("\n\n");
        for(i=0;i<9;i++)
        {
            c=b>>i;
            printf("\n\t\t%d >> %d = %d ",b,i,c);
            conv2(b,'>',i,c);
        }
        printf("\n\n\t\t\tPresione una tecla para continuar");
        getch();
        system("CLS");
        printf("\n\n");
        for(i=0;i<9;i++)
        {
            c=a<<i;
            printf("\n\t\t%d << %d = %d ",a,i,c);
            conv2(a,'<',i,c);
        }
        printf("\n\n");
        for(i=0;i<9;i++)
        {
            c=b<<i;
            printf("\n\t\t%d << %d = %d ",b,i,c);
            conv2(b,'<',i,c);
        }
        printf("\n\nDesea continuar (S/N)? ");
    }
    while(getche()!='N');
    printf("\n\n");
    return 0;
}
//---------------------------------------------------------------------------
void pasbin(unsigned char nro)
{
    unsigned char aux;
    for(aux=0x80;aux>0;aux>>=1)
        if(nro&aux)
            printf("1");
        else
            printf("0");
}
//---------------------------------------------------------------------------
void conv(unsigned char a,char b,unsigned char c,unsigned char d)
{
    printf("\t\t");
    pasbin(a);
    printf(" %c ",b);
    pasbin(c);
    printf(" = ");
    pasbin(d);
}
//---------------------------------------------------------------------------
void conv1(char a,unsigned char b,unsigned char c)
{
    printf("\t\t%c",a);
    pasbin(b);
    printf(" = ");
    pasbin(c);
}
//---------------------------------------------------------------------------
void conv2(unsigned char a,char b,unsigned char c,unsigned char d)
{
    printf("\t\t");
    pasbin(a);
    printf(" %c%c %d = ",b,b,c);
    pasbin(d);
}
//---------------------------------------------------------------------------
