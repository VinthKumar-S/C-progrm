#include<stdio.h>
int main()
{
	char a[3]={'a','b','c'};
	 char *const p=a; //Constant using after the pointer
	int in;
	printf("Enter the your choice:");
	scanf("%d",&in);
	switch(in)
	{
		case 1:
	printf("\n *p=%c",*p);
	//p++;					//Data operation
	printf("\n*p=%c",*p);
	*p='x';				//Pointer Operation
		//p++;--Error occure
	printf("\n*p=%c",*p);
	break;	
	}
	return 0;
}
