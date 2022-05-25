/* write a program in c to read any month number in integer and display
month name in the word.

test data:
4
expected output:
april */

#include<stdio.h>

int main()
{
	int week;
     printf("enter the week no :");
     scanf("%d",&week);	

     switch(week)
	 {

     case 1:	 
	      printf("monday");
		  break;
    case 2:
	      printf("tuesday");
		  break;
    case 3:
	      printf("wednsday");
		  break;
	case 4:
	      printf("thursday");
		  break;
    case 5:
	      printf("friday");
		  break;
	case 6:
	      printf("saturday");
		  break;
	case 7:
	      printf("sunday");
		  break;
	default :
	       printf("aukat me search karo");
	      break;
    }
}
