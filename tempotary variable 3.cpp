#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a,b");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%d=%d",c,a);
	printf("\n%d=%d",a,b);
	printf("\n%d=%d",b,c);
	printf("\na=%d\n b=%d",a,b);
}
