#include<stdio.h>
struct student
{
	char *name;
	int age;
	float per;
};
int main()
{
	struct student o={"RAM",20,75.5};
	struct student *ptr=&o;
	printf("\nName:%s",(*ptr).name);//calling values using pointers
	printf("\nAge:%d",ptr->age);
	printf("\nPercentage:%f",ptr->per);
	return 0;
}

