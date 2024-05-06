#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two numbers to check the difference:");
	scanf("%d%d",&a,&b);
	printf("A:%d B:%d",a,b);	
	printf("\ngreater than:         %d",a>b);
	printf("\nless than:            %d",a<b);
	printf("\ngreater than or equal:%d",a>=b);
	printf("\nless than or equal:   %d",a<=b);
	printf("\nEqual to:             %d",a==b);
	return 0;
}
