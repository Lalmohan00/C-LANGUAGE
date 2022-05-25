#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the first number a : ");
	scanf("%d",&a,&b);
	printf("enter the second number b : ");
	scanf("%d",&b);
	
    temp=a;
	a=b;
	b=temp;
	
	printf("swap number is a=%d,b=%d:",a,b);
	
	return 0;
}
}