#include<stdio.h>
int main()
{
	int a;///Input a number and check whether it is divisible by both 5 and 11 or not.
	printf("Enter a number:");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	{
		printf("The number %d is divisible by both 5 and 11",a);
	}
	else
	{
		printf("The number %d is not divisible by 5 and 11",a);
	}
	return 0;
}
