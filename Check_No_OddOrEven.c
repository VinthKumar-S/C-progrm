#include<stdio.h>
int main()
{
	int number;
	printf("Enter the Number to check:");
	scanf("%d",&number);
	if(number%2==0)
	{
	printf("The given number is evennumber%",number);	
	}
	else
		printf("It is a oddnumber:%d",number);
	return 0;
}
