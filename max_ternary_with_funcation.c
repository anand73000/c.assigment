#include<stdio.h>
int fun(char x)
{
	
	
 printf("%c",x);
	
	
}

int main()
{
	int a=201,b=475;
	char max;
	max= (a>b) ? 'a' :  'b' ;
	fun(max);
	return 0;
}