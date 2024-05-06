#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total,rollNo;
	float ave;
	printf("Enter the Rollnumber:");
	scanf("%d",&rollNo);
	printf("\nEnter the Marks of Five Subjects:\n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	ave=(float)total/5;
	printf("\nWelcome-%d",rollNo);
	printf("\nThe Totalmark:%d",total);
	printf("\nThe Average Mark:%0.1f",ave);
	if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
	{
		printf("\nYour pass Successfully in the exam..");
		if(ave>=90||ave==100)
		printf("\nYour Grade is:A");
		else if(ave>=80||ave==89)
		printf("\nYour Grade is:B");
		else if(ave>=70&&ave==79)
			printf("\nYour Grade is:C");
		else 
			printf("\nYour Grade is D");		
	}
		else
			printf("\nYour Fail..");
	return 0;
	
}
