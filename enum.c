#include<stdio.h>
enum Bool{No,yes};
enum value{one=10,two=11};
void check();
int main()
{
	enum Bool a,b;
	a=yes;
	printf("Given value:%d",a);
	b=No;
	printf("\nGiven value:%d",b);
	check();
	return 0;
}
void check()
{
		enum value c,d;
	c=one;
	printf("\nAssign value:%d",c);
		d=two;
	printf("\nAssign value:%d",d);
}
