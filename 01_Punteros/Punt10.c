//---------------------------------------------------------------------------
#include<stdio.h>
//---------------------------------------------------------------------------
int main(void)
{
	long int l,*pl;
	char *pc;
	float f,*pf;
	pl=&l;
	scanf("%ld",&l);
	printf("\n%ld   %lx   %p\n",l,l,&l);
	for(pc=pl;pc<(char *)pl+4;pc++)
		printf("%p  %2x\n",pc,*pc);
	pf=&f;
	scanf("%f",&f);
	printf("\n%f    %p\n",f,&f);
	for(pc=pf;pc<(char *)pf+4;pc++)
		printf("%p  %2x\n",pc,*pc);
	return 0;
}
//---------------------------------------------------------------------------

