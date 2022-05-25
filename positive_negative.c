/*write a c program to check whether a given number is positive or negative.
test data:15
expected output:
15 is positive number */

#include<stdio.h>

int main()
{
	int n;
        printf("enter the number :");
	    scanf("%d",&n);
	
	if(n>=0)
	    printf("this is positive number");
	
	else
		printf("this is negative number");
	
	return 0;
}