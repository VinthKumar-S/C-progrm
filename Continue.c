#include<stdio.h>
int main(){
	int n,i,num,sum;
printf("Enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter the number:");
	scanf("%d",&num);
	if(num==0)
	{
		continue;
	}
	sum+=num;
}
printf("\nTotal:%d",sum);
return 0;
}
