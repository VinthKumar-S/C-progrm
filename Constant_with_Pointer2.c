#include<stdio.h>
int main()
{
	char a[3]={'a','b','c'};
	const char *p=a; //Constant using before Datatype
	int in;
	printf("Enter the your choice:");
	scanf("%d",&in);
	switch(in)
	{
		case 1:
	printf("\n *p=%c",*p);
	p++;					//Data operation
	printf("\n*p=%c",*p);
	//*p='x';-Error occure				//Pointer Operation
	p++;
	printf("\n*p=%c",*p);
	break;	
	}
	return 0;
}
