//---------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
//---------------------------------------------------------------------------
void IngresarString(char *);
void MuestraString(char *);
void MuSt(char *);
int LargoString(char *);
void CopiaString(char *,char *);
//---------------------------------------------------------------------------
int main(void)
{
    char VEC[7]={'p','a','l','a','b','r','a'};
    char st[8]={'p','a','l','a','b','r','a',0};
    char st1[10]={'p','a','l','a','b','r','a','\0'};
    char st2[10]="palabra";
    printf("Muestra distintas inicializaciones de strings\n\n");
    printf("VEC[7]={\'p\',\'a\',\'l\',\'a\',\'b\',\'r\',\'a\'} -> %s\n\n",VEC);
    printf("st[8]={\'p\',\'a\',\'l\',\'a\',\'b\',\'r\',\'a\',0} -> %s\n",st);
    printf("st1[10]={\'p\',\'a\',\'l\',\'a\',\'b\',\'r\',\'a\',\'\\0\'} -> %s\n",st1);
    printf("st2[10]=\"palabra\" -> %s\n",st2);
    printf("Ingrese un string : ");
    IngresarString(st1);
    printf("\n\n\nEl string es : ");
    MuestraString(st1);
    printf("\n\n\nEl string es : ");
    MuSt(st1);
    printf("\n\n\nEl largo del string es%d",LargoString(st1));
    printf("\n\n\nCopia %s st2 = %s\n\n",st1,st2);
    CopiaString(st1,st2);
    puts(st2);
    printf("\n\n");
    return 0;
}
//---------------------------------------------------------------------------
void IngresarString(char *st)
{
    int i=0;
    do
    {
        st[i]=getche();
        i++;
    }
    while(st[i-1]!=13);
    st[i-1]='\0';
}
//---------------------------------------------------------------------------
void MuestraString(char *st)
{
    int i=0;
    while(st[i])
    {
        putchar(st[i]);
        i++;
    }
}
//---------------------------------------------------------------------------
void MuSt(char *st)
{
    while(*st)
    {
        putchar(*st);
        st++;
    }
}
//---------------------------------------------------------------------------
int LargoString(char *st)
{
    int x=0;
    while(*st)
    {
        x++;
        st++;
    }
    return x;
}
//---------------------------------------------------------------------------
void CopiaString(char *orig,char *dest)
{
    while(*orig)
    {
        *dest=*orig;
        orig++;
        dest++;
    }
    *dest='\0';
}
//---------------------------------------------------------------------------
