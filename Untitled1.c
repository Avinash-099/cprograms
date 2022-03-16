#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	i=n%10;
	while(n!=0)
	{
		j=n%10;
		n=n/10;
		
	}
	printf("%d",i+j);
}
