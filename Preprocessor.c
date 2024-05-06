#include<stdio.h>
#define LIMITS 5
#define MSG "Tutor joes"
#define custom_message(a)\
printf("\n"#a" Welcome to our insitution");
int main()
{
	int i;
	for( i=0;i<LIMITS;i++)
	{
		printf("\nprinting i value:%d",i);
	}
	printf("\n%s",MSG);
	custom_message(Ram Kumar);
	printf("\nFile Name:%s",__FILE__);
	printf("\nTime:%s",__TIME__);
	printf("\nLine:%d",__LINE__);
	return 0;
}
