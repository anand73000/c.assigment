#include<stdio.h>
int fun()
{
	int number;
	
	scanf("%d",&number);
	
	
	if(number>=0)
	{
		printf("Number is +ve");
	}
	else
	{
		printf("Number is -ve");
	}
	
}
int main()
{
	fun();
	return 0;
}