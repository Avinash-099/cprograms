#include<stdio.h>
int main()
{
	int number,i;
	printf("enter any number");
	scanf("%d",&number);
	for(i=1;i<=11;i++)
	{
		printf("%d\n",number*i);
	}
}
