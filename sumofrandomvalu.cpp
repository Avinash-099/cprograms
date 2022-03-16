#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("Enter limite = ");
	scanf("%d",&b);
	
	for(int i=1;i<=b;i++)
	{
		printf("Enter any random value = ");
		scanf("%d",&a);
		sum+=a;
	}
	printf("sum of random no. = %d\n",sum);
	return(0);
}
