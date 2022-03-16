#include<stdio.h>
int main()
{
	int n,d,sum=0;
	printf("Enter any value = ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		d=n%10;
		sum=sum+(d*d);
		n=n/10;	
	}
	printf("Sum of squres of a no. = %d",sum);
	return(0);
	
}
