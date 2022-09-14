#include<stdio.h>
int staticfun()
{ 
   int x=1;
   static int y=1;	
   
	printf("x=%d and y=%d\n",x,y);
	x++;
	y++;
}
int main()
{
	 staticfun();
	 staticfun();
	 staticfun();
	 staticfun();
	return 0;
}