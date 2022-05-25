#include<stdio.h>

int main()
{
   int a,b;
    printf("Enter the real part of complex number: ");
    scanf("%d",&a);
    printf("Enter the imaginary part of complex number: ");
    scanf("%d",&b);
	
    printf("\nComplex number is: %d%+di",a,b );
    return 0;
}