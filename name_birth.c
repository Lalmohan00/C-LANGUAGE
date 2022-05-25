//write a program in c that reads a forename,surename and year of birth
//and display the names and the year one after another squentially.

#include<stdio.h>

int main()
{
	char fname[20],sname[20];
	int birth;
	printf("enter the forename :");
	scanf("%s",&fname);
	printf("enter the surename :");
	scanf("%s",&sname);
	printf("enter the year of birth :");
	scanf("%d",&birth);
	
	printf("\n %s",fname);
	printf("\t %s",sname);
	printf("\n %d",birth);
	
	return 0;
}