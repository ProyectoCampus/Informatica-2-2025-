//---------------------------------------------------------------------------
#include <stdio.h>
//---------------------------------------------------------------------------
struct alumno
{
	int legajo;
	float promedio;
}ALUMNO;
//---------------------------------------------------------------------------
struct fecha
{
	int dia,mes,anio;
}fechanac;
//---------------------------------------------------------------------------
struct fe
{
	int dia,mes,anio;
};
//---------------------------------------------------------------------------
int main(void)
{
	struct alumno Alumej;
	struct fecha FecIng={9,7,1816},fech;
	struct fe FF;
	fechanac.dia=27;
	fechanac.mes=4;
	fechanac.anio=2009;
	fech=FecIng;
	FF.dia=fech.dia;
    return 0;
}
//---------------------------------------------------------------------------
