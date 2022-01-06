#include<stdio.h>
int main()
{
	int number,i,rem,sum=0;
	printf("enter any number\n");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		rem=i%2;
		if(rem!=0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
}
