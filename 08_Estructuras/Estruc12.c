//---------------------------------------------------------------------------
#include<stdio.h>
#include<conio.h>
//---------------------------------------------------------------------------
union alfa
{
	int A[2];
	char B[4];
	float C;
};
//---------------------------------------------------------------------------
int main(void)
{
	union alfa dato;
	dato.A[0]=6529;
	dato.A[1]=30287;
	clrscr();
	printf("\n\ndato.A[0]=%d\tdato.A[1]=%d",dato.A[0],dato.A[1]);
	printf("\nEn formato hexadecimal");
	printf("\ndato.A[0]=%X\tdato.A[1]=%X",dato.A[0],dato.A[1]);
	dato.B[0]='A';
	dato.B[1]='B';
	dato.B[2]='C';
	dato.B[3]='D';
	printf("\n\ndato.B[0]=%c\tdato.B[1]=%c\tdato.B[2]=%c\tdato.B[3]=%c",dato.B[0],dato.B[1],dato.B[2],dato.B[3]);
	printf("\nEn formato ASCII");
	printf("\ndato.B[0]=%d\tdato.B[1]=%d\tdato.B[2]=%d\tdato.B[3]=%d",dato.B[0],dato.B[1],dato.B[2],dato.B[3]);
	printf("\nEn formato hexadecimal");
	printf("\ndato.B[0]=%X\tdato.B[1]=%X\tdato.B[2]=%X\tdato.B[3]=%X",dato.B[0],dato.B[1],dato.B[2],dato.B[3]);
	dato.C=3.123e-10;
	printf("\n\ndato.C=%G",dato.C);
	printf("\n\nPresione una tecla para continuar");
	getch();
	dato.A[0]=6529;
	dato.A[1]=30287;
	clrscr();
	printf("\n\ndato.A[0]=%d\tdato.A[1]=%d",dato.A[0],dato.A[1]);
	printf("\nEn formato hexadecimal");
	printf("\ndato.A[0]=%X\tdato.A[1]=%X",dato.A[0],dato.A[1]);
	printf("\n\nSin cambiar los valores examinamos el campo ""B""");
	printf("\n\ndato.B[0]=%c\tdato.B[1]=%c\tdato.B[2]=%c\tdato.B[3]=%c",dato.B[0],dato.B[1],dato.B[2],dato.B[3]);
	printf("\nEn formato ASCII");
	printf("\ndato.B[0]=%d\tdato.B[1]=%d\tdato.B[2]=%d\tdato.B[3]=%d",dato.B[0],dato.B[1],dato.B[2],dato.B[3]);
	printf("\nEn formato hexadecimal");
	printf("\ndato.B[0]=%X\tdato.B[1]=%X\tdato.B[2]=%X\tdato.B[3]=%X",dato.B[0],dato.B[1],dato.B[2],dato.B[3]);
	printf("\n\nSin cambiar los valores examinamos el campo ""C""");
	printf("\n\ndato.C=%G",dato.C);
	printf("\n\nPresione una tecla para continuar");
	getch();
	clrscr();
	dato.B[0]='A';
	dato.B[1]='B';
	dato.B[2]='C';
	dato.B[3]='D';
	printf("\n\ndato.B[0]=%c\tdato.B[1]=%c\tdato.B[2]=%c\tdato.B[3]=%c",dato.B[0],dato.B[1],dato.B[2],dato.B[3]);
	printf("\nEn formato ASCII");
	printf("\ndato.B[0]=%d\tdato.B[1]=%d\tdato.B[2]=%d\tdato.B[3]=%d",dato.B[0],dato.B[1],dato.B[2],dato.B[3]);
	printf("\nEn formato hexadecimal");
	printf("\ndato.B[0]=%X\tdato.B[1]=%X\tdato.B[2]=%X\tdato.B[3]=%X",dato.B[0],dato.B[1],dato.B[2],dato.B[3]);
	printf("\n\nSin cambiar los valores examinamos el campo ""A""");
	printf("\n\ndato.A[0]=%d\tdato.A[1]=%d",dato.A[0],dato.A[1]);
	printf("\nEn formato hexadecimal");
	printf("\ndato.A[0]=%X\tdato.A[1]=%X",dato.A[0],dato.A[1]);
	printf("\n\nSin cambiar los valores examinamos el campo ""C""");
	printf("\n\ndato.C=%G",dato.C);
	printf("\n\nPresione una tecla para continuar");
	getch();
	clrscr();
	dato.C=3.123e-10;
	printf("\n\ndato.C=%G",dato.C);
	printf("\n\nSin cambiar los valores examinamos el campo ""A""");
	printf("\n\ndato.A[0]=%d\tdato.A[1]=%d",dato.A[0],dato.A[1]);
	printf("\nEn formato hexadecimal");
	printf("\ndato.A[0]=%X\tdato.A[1]=%X",dato.A[0],dato.A[1]);
	printf("\n\nSin cambiar los valores examinamos el campo ""B""");
	printf("\n\ndato.B[0]=%c\tdato.B[1]=%c\tdato.B[2]=%c\tdato.B[3]=%c",dato.B[0],dato.B[1],dato.B[2],dato.B[3]);
	printf("\nEn formato ASCII");
	printf("\ndato.B[0]=%d\tdato.B[1]=%d\tdato.B[2]=%d\tdato.B[3]=%d",dato.B[0],dato.B[1],dato.B[2],dato.B[3]);
	printf("\nEn formato hexadecimal");
	printf("\ndato.B[0]=%X\tdato.B[1]=%X\tdato.B[2]=%X\tdato.B[3]=%X",dato.B[0],dato.B[1],dato.B[2],dato.B[3]);
	printf("\n\nPresione una tecla para terminar");
	getch();
    return 0;
}
//---------------------------------------------------------------------------
