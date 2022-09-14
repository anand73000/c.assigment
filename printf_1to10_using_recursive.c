#include<stdio.h>
int recursivefun(int x)
{
	printf("%d ",x);
	if(x<10)
	{
		
		 recursivefun( x+1);
	}
	
}
int main ()
{
	 recursicefun(1);
	return 0;
}