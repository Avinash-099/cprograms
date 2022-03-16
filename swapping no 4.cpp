#include<stdio.h>
void main()
{
	printf("enter the value a,b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\na%d=%d+%d",a,a,b);
	printf("\nb%d=%d-%d",a,b);
	printf("\na%d=%d-%d",a,b);
	printf("\na%d=%d,b=%d,",a,b);
}
