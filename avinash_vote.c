#include<stdio.h>
int main()
{
	int age;
	printf("enter your age\n");
	scanf("%d",&age );
	if(age>=18)
	{
		printf("you are elligible for voting");
	}
	else 
	{
		printf("you are not alligible for voting");
	}
}
