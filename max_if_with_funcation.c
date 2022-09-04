#include<stdio.h>
int fun()
{
		int number1,number2;
	printf("enter your digit :\n");
	scanf("%d%d",&number1,&number2);
	if(number1>number2)
	{
		printf("max num =%d",number1);
	}
	else
	{
		printf("max num =%d\n",number2);
	}
	
}
int main()
{

	fun();
	fun();
	
	return 0;
}