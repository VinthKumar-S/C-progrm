#include<stdio.h>
struct student
{
	char *name;
	int age;
	float per;
};
int main()
{
	struct student o={"Tutor joes",30,85.5};
	printf("\nName:%s",o.name);
	printf("\nAge:%d",o.age);
	printf("\nPercentage:%f",o.per);
	return 0;
}
