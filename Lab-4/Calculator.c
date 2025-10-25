#include<stdio.h>
int main()
{
	int operator;
	float a,b,c;
	printf("Enter the first number:");
	scanf("%f",&a);
	printf("Enter the second number:");
	scanf("%f",&b);
	printf(" 1.Addition\n 2.Substraction\n 3.Division\n 4.Multiplication\nEnter the operator between 1 and 4:");
	scanf("%d",&operator);
	switch(operator)
	{
		case 1:
			c=a+b;
			printf("The value of c is:%f",c);
			break;
		case 2:
			c=a-b;
			printf("The value of c is:%f",c);
			break;
		case 3:
			c=a/b;
			printf("The value of c is:%f",c);
			break;
		case 4:
			c=a*b;
			printf("The value of c is:%f",c);
			break;
	    default:
	    	printf("Invalid input!!");
			
			}
    return 0;
}
