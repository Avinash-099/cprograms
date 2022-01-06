#include<stdio.h>
int main()
{
	int number,i,sum=0;
	printf("enter any number \n");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
