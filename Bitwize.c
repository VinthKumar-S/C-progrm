#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the two numbers to check Bitwize operator:");
	scanf("%d%d",&a,&b);
	printf("\nBitwise And:%d",a&b);
	printf("\nBitwize Or:%d",a|b);
	printf("\nBitwize Xor:%d",a^b);
	printf("\nBitwize Not:%d",~a);
	printf("\nEnter the number to cheack bitwize shift-left and right.");
	scanf("%d",&c);
	a=c<<2;
	b=c>>2;
	printf("\nShift Left:%d",a);
	printf("\nShift Right:%d",b);
	return 0;
}
