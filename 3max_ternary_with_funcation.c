#include<stdio.h>
int fun(char t)
{
	
  printf("%c",t);	
	
}


int main()
{
	int x=4099,y=2000,z=500;
	char max;
	max= (x>y) ? (x>z) ? 'x' : 'z'    :  (y>z) ?  'y' : 'z';
	fun(max);
	return 0;
}