#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter a value =");
	scanf("%d",&a);
	printf("Enter b value =");
	scanf("%d",&b);
	int sum=a+b;
	printf("Sum of a and b = %d\n",sum);
	int sub=a-b;
	printf("Substraction of a and b = %d\n",sub);
	float div=a/b;
	printf("Division of a and b = %.4f\n",div);	
	int mul=a*b;
	printf("multiplation of a and b = %d\n",mul);
	
}
