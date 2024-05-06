#include<stdio.h>
int a=19;
void global();
int main()
{
	printf("On main:%d",a);
	global();
	return 0;
}
void global()
{
	a++;
	printf("\nOn methode:%d",a);
}
