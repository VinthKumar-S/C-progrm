#include<stdio.h>
struct store
{
	double price;
	char *name;
	char *author;
	char *model;
	char *color;
}o;
struct store2
{
	double price;
	union{
		struct{
			char *name;
			char *author;
		}book;
		struct
		{
			char*model;
			char*color;
		}cell;
	}product;
}o2;
int main()
{
	o.model="Nokia";
	o.color="RED";
	o.price=3550.00;
	printf("\nSize:%d",sizeof(struct store));
	printf("\nSize:%d",sizeof(struct store2));
	o2.product.cell.model="Nokiya";
	o2.product.cell.color="Red";
	o2.price=3550.00;
	return 0;
}
