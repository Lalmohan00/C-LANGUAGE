/*write a c program read the age of a candidate and determine whether it is eligible for
casting his/her own vote.
test data:21
expected output:
congratulation! you are eligible your vote. */ 

#include<stdio.h>

int main()
{
	int n;
	    printf("enter the candidate age :");
	    scanf("%d",&n);
	
	if(n>=18)
		printf("it is eligible for vote");
	
	else
		printf("it is note eligible for vote");
	return 0;
}