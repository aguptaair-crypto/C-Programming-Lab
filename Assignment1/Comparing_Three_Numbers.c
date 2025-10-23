#include<stdio.h>
int main()
{
	int a,b,c;//Input three number and determine which is the largest.
	printf("Enter the number for a=");
	scanf("%d",&a);
	printf("Enter the number for b=");
	scanf("%d",&b);
	printf("Enter the value for c=");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("The larger value is:%d",a);
	}
	else if(b>a && b>c)
	{
		printf("The larger value is:%d",b);
	}
	else if(c>a && c>b)
	{
		printf("The larger value is:%d",c);
	}
	else
	{
		printf("All the values are same");
	}
	return 0;
}
