#include<stdio.h>
struct demo
{
	int a;
	char b;
};
union udemo
{
	int a;
	char b;
};
int main()
{
	printf("\nInteger Size:%d",sizeof(int));
	printf("\nChar    Size:%d",sizeof(char));
	printf("\nUnion   Size:%d",sizeof(union udemo));//union size is based on biggest size of a data
	printf("\nStruct  Size:%d",sizeof(struct demo));
return 0;	
}
