#include<stdio.h>
int main()
{
	int a,b,count;
    printf("enter two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    count=a+b;
    a=count-a;
    b=count-b;
    printf("%d   %d",a,b);
}
