#include<stdio.h>
int fun(int x,int y)
{
	int a;
	a=x-y;
	return a;
}

int main()
{
	fun(10,4);
	printf("%d",fun(10,4));
	
	return 0;
}