//write the c program to perform addition,subtraction,multiplication
//and division of two numbers.

#include<stdio.h>

int main()
{
	int add,sub,mult,div,a,b;
	printf("enter the first number :");
	scanf("%d",&a);
	printf("enter the second number :");
	scanf("%d",&b);
	
	add=(a+b);
	sub=(a-b);
	mult=(a*b);
	div=(a/b);
	
	printf("\n addition of two number %d",add);
	printf("\n subtraction of two number  %d",sub);
	printf("\n multiplication of two number %d",mult);
	printf("\n division of two number %d",div);
	return 0;
}