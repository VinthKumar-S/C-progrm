#include<stdio.h>
int main()
{
	total();
	return 0;
}
void total()
{
	struct mark			//struct declare as localy
	{
		int a,b,c;
	}m;
	m.a=20;
	m.b=30;
	m.c=m.a+m.b;
	printf("Total:%d",m.c);
}
