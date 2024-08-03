//---------------------------------------------------------------------------
#include<stdio.h>
//---------------------------------------------------------------------------
int main(void)
{
	int *pi,*pj;
	int i,j;
	pi=&i;
	pj=&j;
	if(pi>pj)
		printf("\npi es mayor a pj\n");
	else
		printf("\npi es menor a pj\n");
	if(pi==&i)
		printf("\npi es igual a &i\n");
	else
		printf("\npi no es igual a &i\n");
	if(pi>0x300)
		printf("\npi apunta a una direcci¢n mayor a 0x300\n");
	else
		printf("\npi apunta a una direcci¢n menor a 0x300\n");
	return 0;
}
//---------------------------------------------------------------------------
