#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g,h;
	printf("enter the value of a and b");
	scanf("%f%f",&a,&b);
	c=a<b;
	d=a<=b;
	e=a>b;
	f=a>=b;
	g=a==b;
	h=a!=b;
	printf("\n%f<%f=%d",a,b,c);
	printf("\n%f<=%f=%d",a,b,d);
	printf("\n%f>%f=%d",a,b,e);
	printf("\n%f>=%f=%d",a,b,f);
	printf("\n%f==%f=%d",a,b,g);
	printf("\n%f!=%f=%d",a,b,h);
}

