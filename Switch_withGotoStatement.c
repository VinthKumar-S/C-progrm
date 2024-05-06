#include<stdio.h>
int main()
{
	int c,num,total,t1=0,t2=0,t3=0,t4=0;
	start:
	printf("\n\tMenu card\n");
	printf("\t\t1.Coffee       Rs:15\n");
	printf("\t\t2.Tea          Rs:10\n");
	printf("\t\t3.ColdCoffee   Rs:25\n");
	printf("\t\t4.MilkShake    rs:50\n");
	printf("\n\nTell me what you want:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("\nhow many cup of Coffee:");
			scanf("%d",&num);
			t1=15*num;
			printf("\nOkay Thanks for Answer");
			break;
		case 2:
			printf("\nhow many cup of Tea:");
			scanf("%d",&num);
			t2=10*num;
			printf("\nOkay Thanks for Answer");
			break;
		case 3:
			printf("\nhow many cup of ColdCoffee:");
			scanf("%d",&num);
			t3=25*num;
			printf("\nOkay Thanks for Answer");
			break;
		case 4:
			printf("\nhow many cup of MilkShake:");
			scanf("%d",&num);
			t4=50*num;
			printf("\nOkay Thanks for Answer");
			break;
			default:
				printf("Enter the right Choice.");		
	}
	int end;
	printf("\nDo you want to continue press 1 or 0 to stop:");
	scanf("%d",&end);
	if(end==1)
	{
		goto start;
	}
	else if(end==0)
	{
				total=t1+t2+t3+t4;
			printf("\nYour Bill Amount%d:",total);
			printf("\nThanks for visiting..");
	}
	return 0;
}
