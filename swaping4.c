#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the value a,b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\na%d=%d,b=%d",a,b);
}
