//---------------------------------------------------------------------------
#include<stdio.h>
//---------------------------------------------------------------------------
int main(void)
{
	int i,*pi,**ppi;
	pi=&i;
	ppi=&pi;
	i=7;
	*pi=9;
	**ppi=28;
	return 0;
}
//---------------------------------------------------------------------------
