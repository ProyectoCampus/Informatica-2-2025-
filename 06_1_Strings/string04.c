//---------------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
//---------------------------------------------------------------------------
int main(void)
{
	char s[10]="CHAU";
	char s1[]="inform�tica";
	char s2[20];
	printf("\n%s\t%s\t%s\n",s,s1,s2);
	printf("\n%d\t%d\t%d\n\n",sizeof(s),sizeof(s1),sizeof(s2));
	return 0;
}
//---------------------------------------------------------------------------