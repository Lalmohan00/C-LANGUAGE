/* write a c program to read to read temperature  in centigrade and display a suitable
message according to temperature state below:
temp < 0 then freezing weather
temp 0-10 then very cold weather
temp 10-20 then cold weather
temp 20-30 then normal in temp
temp 30-40 then its hot
temp >=40 then its very hot

test data:
42
expected output:
its very hot. */

#include<stdio.h>

int main()
{
	int temp;
	printf("enter the temperature in centigrade :");
	scanf("%d",&temp);
	
	if(temp<0)
	{
		printf("the freezing weather %d",temp);
	}
	else if(temp>0 && 10>temp)
	{
		printf("the very cold weather %d",temp);
	}
	else if(temp>10 && 20>temp)
	{
		printf("the cold weather %d",temp);
	}
		else if(temp>20 && 30>temp)
	{
		printf("the normal temperature %d",temp);
	}
		else if(temp>30 && 40>temp)
	{
		printf("the hot temperature %d",temp);
	}
		else if(temp>=40)
	{
		printf("the very hot temperature %d=",temp);
	}
	return 0;
}