/* write a c pogram to check whther an alphabet is a vowel or consonant.

test data:
k
expected output :
the alphabet is a consonant. */

#include<stdio.h>

int main()
{
	char alphabet;
	printf("enter the alphabet :");
	scanf("%c",&alphabet);
	
	if(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u')
		printf("this is vowel");
	
	
	else
		printf("this is consonant");
	return 0;
}
