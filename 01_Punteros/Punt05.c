//---------------------------------------------------------------------------
int main(void)
{
	int x,*pi,*pf,y,h;
	char *pc,*pd;
	float k,l,*pj,*pk;
	pi=&x;
	pf=&y;
	y=pf-pi;
	pj=&l;
	pk=&k;
	x=pj-pk;
	pi=pj;
	pf=pk;
	y=pi-pf;
	pc=pj;
	pd=pk;
	h=pc-pd;
	return 0;
}
//---------------------------------------------------------------------------
