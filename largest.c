/* write a c program to find the largest of three numbers.

test data: 12 25 52
expected output:
1st number=12, 2nd number=25,  3rd number=52
the 3rd number is the greatest among three */

#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter the first number :");
	scanf("%d",&a);
	printf("enter the second number :");
	scanf("%d",&b);
	printf("enter the third number :");
	scanf("%d",&c);
	
	printf("\n first number %d",a);
	printf("\n second number %d",b);
	printf("\n third number %d",c);
	

     if(a>b)
		 printf("\n fisrt number is largest");
	 
	 else if(b>c)
		 printf("\n second number is largest");
	 
	 else if(c>a)
		 printf("\n third number is largest");
	 return 0;
}
