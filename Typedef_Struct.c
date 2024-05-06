#include<stdio.h>
 typedef struct Methode
 {
 	int c,d;	
 }Methode;
int main()
{
	typedef int INTEGER;
	INTEGER a;
	Methode m;
	m.c=10;
	m.d=20;
	printf("The Variale:%d",a=m.c+m.d);
	return 0;
}


