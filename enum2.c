#include<stdio.h>
int main()
{
	enum point{x=10,y};//another mathed
	enum point a=x,b=y;
	printf("\na:%d",a);
	printf("\nb:%d",b);
	return 0;
}
