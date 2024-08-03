//---------------------------------------------------------------------------
#include <stdio.h>
#include<conio.h>
//---------------------------------------------------------------------------
int main(void)
{
    char ST3[20],ST4[50],ST5[50];
    int i=0;
    printf("Ingrese una frase\n\nUsando getche\n\n");
    do
    {
        ST3[i]=getche();
        i++;
    }
    while((i<20)&&(ST3[i-1]!=13));
    ST3[i-1]='\0';
    printf("\n\n");
    i=0;
    while(ST3[i])
    {
        putchar(ST3[i]);
        i++;
    }
    printf("\n\n");
    printf("Ingrese una frase\n\nUsando gets\n\n");
    gets(ST5);
    printf("\n\n");
    puts(ST5);
    printf("\n\n");
    printf("Ingrese una frase\n\nUsando scanf\n\n");
    scanf("%s",ST4);
    printf("\n\n");
    printf("%s",ST4);
    printf("\n\n");
    return 0;
}
//---------------------------------------------------------------------------
