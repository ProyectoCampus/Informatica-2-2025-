//---------------------------------------------------------------------------
struct CB
{
	unsigned int A:3;
	unsigned int B:1;
	unsigned int C:2;
};
//---------------------------------------------------------------------------
int main(void)
{
	struct CB bit;
	int i;
	bit.A=0;
	bit.B=0;
	bit.C=0;
	for(i=0;i<10;i++)
	{
		bit.A++;
		bit.B++;
		bit.C++;
	}
	return 0;
}
//---------------------------------------------------------------------------
