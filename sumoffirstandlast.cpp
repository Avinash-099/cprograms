#include<stdio.h>
int main()
{
	int rev=0,rem,num,ld,fd;
	printf("Enter any no. = ");
	scanf("%d",&num);
	int c=num;
	
	
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	fd=rev%10;
	ld=c%10;
	
	int sum=fd+ld;
	
	printf("%d",sum);
	return(0);
}
