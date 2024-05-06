#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two numbers:");
	scanf("%d%d",&a,&b);
	float x=(float)a/(float)b;//it make the datatype as float datatype
	printf("\nDivisible value is:%0.1f",x);
	return 0;
}
