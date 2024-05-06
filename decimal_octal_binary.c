#include<stdio.h>
int main()
{
	int a=015,b=0x41;
	printf("the decimal value:%d",a);
	printf("\nthe hexadecimal value is:%d",b);
	float c=253e+2f;//2-value=100,1-value=10
	printf("\nExpentional value:%0.2f",c);
	c=25367e-2f;//2-value=100,1-value=10
	printf("\nExpentional value:%0.2f",c);
	return 0;
}
