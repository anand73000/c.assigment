#include<stdio.h>
int recursicefun(int x)
{
	printf("hello ");
	if(x>0)
	{
		
		 recursicefun( x-1);
	}
	
}
int main ()
{
	 recursicefun(5);
	return 0;
}