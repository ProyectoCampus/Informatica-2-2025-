//---------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
//---------------------------------------------------------------------------
struct Productos
{
	int Articulo;
	char Descripcion[31];
	float PrecioUnitario;
};
//---------------------------------------------------------------------------
struct Vendedores
{
	int Legajo;
	char Nombre[81],Apellido[81];
	int Numero;
	float Comision;
};
//---------------------------------------------------------------------------
struct Ventas
{
	int NumeroArticulo,Cantidad;
};
//---------------------------------------------------------------------------
struct Facturas
{
	int Numero,CodigoCliente,NumeroVendedor;
	struct Ventas Venta[10];
};
//---------------------------------------------------------------------------
struct Comisiones
{
	int Numero;
	float Comision,ValorRecaudado;
};
//---------------------------------------------------------------------------
void IngresarProductos(struct Productos *);
void IngresarVendedores(struct Vendedores *);
void Inicializar(struct Productos *,struct Vendedores *,struct Ventas *,struct Comisiones *);
float IngresarVentas(struct Productos *,struct Ventas *,struct Comisiones *,struct Vendedores *);
void OrdenarProductos(struct Ventas *);
void OrdenarVendedores(struct Comisiones *);
void Listados(struct Ventas *,float,struct Comisiones *);
int BuscarArticulo(int,struct Productos *);
int BuscarVendedor(int,struct Vendedores *);
//---------------------------------------------------------------------------
int main(void)
{
	struct Productos Producto[10];
	struct Vendedores Vendedor[50];
	struct Ventas Venta[10];
	struct Comisiones Comision[50];
	float TotalFacturado;
	IngresarProductos(Producto);
	IngresarVendedores(Vendedor);
	Inicializar(Producto,Vendedor,Venta,Comision);
	TotalFacturado=IngresarVentas(Producto,Venta,Comision,Vendedor);
	OrdenarProductos(Venta);
	OrdenarVendedores(Comision);
	Listados(Venta,TotalFacturado,Comision);
    return 0;
}
//---------------------------------------------------------------------------
void IngresarProductos(struct Productos *Prod)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("Articulo ");
		scanf("%d",&Prod[i].Articulo);
		fflush(stdin);
		printf("Descripción ");
		gets(Prod[i].Descripcion);
		printf("Precio Unitario ");
		scanf("%f",&Prod[i].PrecioUnitario);
	}
}
//---------------------------------------------------------------------------
void IngresarVendedores(struct Vendedores *Vend)
{
	int i;
	for(i=0;i<50;i++)
	{
		printf("Legajo ");
		scanf("%d",&Vend[i].Legajo);
		fflush(stdin);
		printf("Nombre y Apellido ");
		gets(Vend[i].Nombre);
		gets(Vend[i].Apellido);
		printf("Numero ");
		scanf("%d",&Vend[i].Numero);
		printf("Comision ");
		scanf("%f",&Vend[i].Comision);
	}
}
//---------------------------------------------------------------------------
void Inicializar(struct Productos *Prod,struct Vendedores *Vend,struct Ventas *Vent,
struct Comisiones *Com)
{
	int i;
	for(i=0;i<10;i++)
	{
		Vent[i].NumeroArticulo=Prod[i].Articulo;
		Vent[i].Cantidad=0;
	}
	for(i=0;i<50;i++)
	{
		Com[i].Numero=Vend[i].Numero;
		Com[i].Comision=Vend[i].Comision;
		Com[i].ValorRecaudado=0;
	}
}
//---------------------------------------------------------------------------
float IngresarVentas(struct Productos *Prod,struct Ventas *Vent,
struct Comisiones *Com,struct Vendedores *Vend)
{
	struct Facturas Factura;
	float Total=0;
	int i,Art,Ven;
	printf("Numero ");
	scanf("%d",&Factura.Numero);
	while(Factura.Numero)// Factura.Numero!=0
	{
		printf("Codigo Cliente ");
		scanf("%d",&Factura.CodigoCliente);
		printf("Numero Vendedor ");
		scanf("%d",&Factura.NumeroVendedor);
		Ven=BuscarVendedor(Factura.NumeroVendedor,Vend);
		i=0;
		printf("Numero Articulo ");
		scanf("%d",&Factura.Venta[i].NumeroArticulo);
		while((Factura.Venta[i].NumeroArticulo>0)&&(i<10))
		{
			printf("Cantidad ");
			scanf("%d",&Factura.Venta[i].Cantidad);
			Art=BuscarArticulo(Factura.Venta[i].NumeroArticulo,Prod);
			if(Art!=-1)
			{
				Vent[Art].Cantidad+=Factura.Venta[i].Cantidad;
				Total+=Factura.Venta[i].Cantidad*Prod[Art].PrecioUnitario;
			}
			if(Ven!=-1)
				Com[Ven].ValorRecaudado+=Factura.Venta[i].Cantidad*
				Prod[Art].PrecioUnitario*Com[Ven].Comision;
			i++;
			printf("Numero Articulo ");
			scanf("%d",&Factura.Venta[i].NumeroArticulo);
		}
		printf("Numero ");
		scanf("%d",&Factura.Numero);
	}
	return Total;
}
//---------------------------------------------------------------------------
void OrdenarProductos(struct Ventas *Vent)
{
	int i,j;
	struct Ventas Venta;
	for(i=1;i<10;i++)
		for(j=9;j>=i;j--)
		{
			if(Vent[j-1].NumeroArticulo>Vent[j].NumeroArticulo)
			{
				Venta=Vent[j-1];
				Vent[j-1]=Vent[j];
				Vent[j]=Venta;
			}
		}
}
//---------------------------------------------------------------------------
void OrdenarVendedores(struct Comisiones *Com)
{
	int i,j,pos;
	struct Comisiones min;
	for(i=0;i<50;++i)
	{
		pos=i;
		min=Com[i];
		for(j=i+1;j<50;++j)
		{
			if(Com[j].ValorRecaudado<min.ValorRecaudado)
			{
				pos=j;
				min=Com[j];
			}
		}
		Com[pos]=Com[i];
		Com[i]=min;
	}
}
//---------------------------------------------------------------------------
void Listados(struct Ventas *Vent,float Tot,struct Comisiones *Com)
{
	int i;
	printf("\n\nArticulo\tCantidad");
	for(i=0;i<10;i++)
		printf("\n%d\t%d",Vent[i].NumeroArticulo,Vent[i].Cantidad);
	printf("\n\nTotal Recaudado %f",Tot);
	printf("\n\nNúmero Vendedor\tCantidad de Comisión");
	for(i=0;i<50;i++)
		printf("\n%d\t%f",Com[i].Numero,Com[i].ValorRecaudado);
}
//---------------------------------------------------------------------------
int BuscarArticulo(int Art,struct Productos *Prod)
{
	int i=0;
	while((i<10)&&(Prod[i].Articulo!=Art))
		i++;
	if(i>=10)
		i=-1;
	return i;
}
//---------------------------------------------------------------------------
int BuscarVendedor(int Num,struct Vendedores *Vend)
{
	int i=0;
	while((i<50)&&(Vend[i].Numero!=Num))
		i++;
	if(i>=50)
		i=-1;
	return i;
}
//---------------------------------------------------------------------------

