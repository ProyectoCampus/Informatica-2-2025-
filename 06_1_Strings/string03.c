//---------------------------------------------------------------------------
#include<stdio.h>
//---------------------------------------------------------------------------
#define n 5
//---------------------------------------------------------------------------
int main(void)
{
	char str[]="int vec[n],*p,i;";
	char *p=str;
	while(*p++);
    printf("\nlongitud de \" %s \" es %d\n\n",str,p-str);
	return 0;
}
//---------------------------------------------------------------------------
