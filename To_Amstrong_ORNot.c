#include<stdio.h>
int main()
{
	int num,d3,a,d2,d1;
	printf("To check wheater the given number amstrong or not:\n");
	scanf("\n%d",&num);
	//for example the No is 153
	d3=num%10;//3
	a=num/10;//15
	d2=a%10;//5
	d1=a/10;//1
	a=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
	if(a==num)
	printf("The Given No is Amstrong Number..");
	else
		printf("The No is not Amstrong Number..");
	return 0;
}
