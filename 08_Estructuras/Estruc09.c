//---------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
#include<math.h>
//---------------------------------------------------------------------------
struct valor
{
	char x;
	int j;
	float l,m,n[4];
};
//---------------------------------------------------------------------------
int main(void)
{
	struct valor dato[2];
	char i,ii;
	float aux;
	clrscr();
	for(i=0;i<2;i++)
	{
		printf("\n\n\n\t\tIngrese los siguientes datos: ");
		printf("\n\nUn caracter alfabetico : ");
		dato[i].x=getche();
		printf("\n\nUn numero entero : ");
		scanf("%d",&dato[i].j);
		printf("\n\nUn numero real : ");
		scanf("%f",&dato[i].l);
		printf("\nReintente con un numero real :");
		scanf("%f",&aux);
		dato[i].m=aux;
		for(ii=0;ii<4;ii++)
			scanf("%f",&dato[i].n[ii]);
	}
	clrscr();
	for(i=0;i<2;i++)
	{
		printf("Usted ingreso los siguientes valores\n\n");
		printf("Un caracter %c, cuyo valor ASCII es %d, y ",dato[i].x,dato[i].x);
		printf("en formato hexadecimal es %X\n\n",dato[i].x);
		printf("Un numero entero %d, ",dato[i].j);
		printf("que en formato hexadecimal es %X\n\n",dato[i].j);
		printf("El primer valor real es %f\n\n",dato[i].l);
		printf("Luego ingreso este valor en el auxiliar %f",aux);
		printf(" que coincide con el guardado en la estructura %f",dato[i].m);
		for(ii=0;ii<4;ii++)
			printf("%f",dato[i].n[ii]);
	}
    return 0;
}
//---------------------------------------------------------------------------
