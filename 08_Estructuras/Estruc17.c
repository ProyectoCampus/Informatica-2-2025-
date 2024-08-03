//---------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
//---------------------------------------------------------------------------
struct FECHA f1 (void);
struct PERSONA f2 (void);
//---------------------------------------------------------------------------
struct FECHA
{
	int dia, mes, anio;
};
//---------------------------------------------------------------------------
struct PERSONA
{
	char nom[30];
	char apell[30];
	struct FECHA fnac;
};
//---------------------------------------------------------------------------
struct A
{
	int a;
	float b;
};
//---------------------------------------------------------------------------
int main(void)
{
	struct PERSONA pers;
	struct A a;
	strcpy(pers.nom,"JUAN");
	strcpy(pers.apell,"PEREZ");
	a.a=5;
	a.b=2.1;
	pers.fnac=f1();
	pers=f2();
    return 0;
}
//---------------------------------------------------------------------------
struct PERSONA f2 (void)
{
	struct PERSONA P={"pablo","Marmol",{10,3,-2528}};
	return P;
}
//---------------------------------------------------------------------------
struct FECHA f1 (void)
{
	struct PERSONA pers;
	struct A a;
	struct FECHA hoy;
	strcpy(pers.nom,"PEDRO");
	a.b=7.89;
	scanf("%d",&hoy.dia);
	scanf("%d",&hoy.mes);
	scanf("%d",&hoy.anio);
	return hoy;
}
//---------------------------------------------------------------------------

