/*write a c programto find whether a given year is an leap year or not.
test data:2016
expected output:
2016 is a leap year. */

#include<stdio.h>

int main()
{
	int n;
	printf("enter the year :");
	scanf("%d",&n);
	
	if(n%4==0)
		printf("this is leap year");
	
	else
		printf("this is not leap year");
	return 0;
}