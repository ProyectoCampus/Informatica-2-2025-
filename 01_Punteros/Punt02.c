//---------------------------------------------------------------------------
#include<stdio.h>
//---------------------------------------------------------------------------
int main(void)
{
	int i,*pi,*pj;
	char c,*pc;
	float f,*pf;
	pi=&i;
	pc=&c;
	pf=&f;
	printf("\nLa direcci¢n de i es: %p\nEl contenido de pi es: %p\n",&i,pi);
	printf("\nLa direcci¢n de c es: %p\nEl contenido de pc es: %p\n",&c,pc);
	printf("\nLa direcci¢n de f es: %p\nEl contenido de pf es: %p\n",&f,pf);
	pj=pi;
	printf("\nLa direcci¢n de i es: %p\nEl contenido de pi es: %p\n",&i,pi);
	printf("El contenido de pj es: %p\n",pj);
	pc=0x7A34;
	pf=567;
	printf("\nEl contenido de pc es: %p\nEl contenido de pf es: %p\n",pc,pf);
	return 0;
}
//---------------------------------------------------------------------------
