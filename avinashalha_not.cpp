#include<stdio.h>
int main()
{
	char alphabet;
	scanf("%c",&alphabet);
	if((alphabet>=65 && alphabet<=90 ) || (alphabet>=97 && alphabet<=122))
	{
		printf("alphabet");
	}
	else 
	{
		printf("no");
	}
}
