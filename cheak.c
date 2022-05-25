/* write a c program to accept two integer and cheak whether they are equal or not 
 test dat :15 15
expected out:
number1 and number2 are equal  */

#include<stdio.h>

int main()
{
	int a,b;
	printf("enter the first number :");
	scanf("%d",&a);
	printf("enter the second number :");
	scanf("%d",&b);
	
	if(a==b)
		printf("this is equal");
	else
		printf("this is not equal");
	return 0;
}