//---------------------------------------------------------------------------
#include <stdio.h>
//---------------------------------------------------------------------------
struct fecha
{
	int dia,mes,anio;
};
//---------------------------------------------------------------------------
struct persona
{
	int legajo;
	long dni;
	struct fecha nacimiento;
};
//---------------------------------------------------------------------------
int main(void)
{
	struct persona P;
	struct fecha f={10,8,2010};
	P.legajo=2398;
	P.dni=19265989;
	P.nacimiento=f;
    return 0;
}
//---------------------------------------------------------------------------
