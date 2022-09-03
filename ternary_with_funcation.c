#include<stdio.h>
int fun(char x)
{

  printf("%c",x);	
	
	
}

int main()
{
	int a=56,b=99;
	char row;
  row = (a==b) ? 't' : 'f';
	fun(row);
	return 0;
}