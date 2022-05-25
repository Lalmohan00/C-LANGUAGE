/* write c program to check whether a given number is even
   or odd.
   test data:15
   expected output:
   15 is an odd integer */
   
   #include<stdio.h>
   
   int main()
   {
	   int a;
	   printf("enter the number :");
	   scanf("%d",&a);
	   
	   if(a%2==0)
		   printf("even number");
	   
	   else
		   printf("odd number");
	   return 0;
   }
   