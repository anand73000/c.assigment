#include<stdio.h>
int z=55;
int scope(int x)
{
	int test;
	test=x;
	printf("test=%d and z=%d\n",test,z);
	
}
int main ()
{
	int y=88;
	scope(456);
	printf("y=%d and scope=%d\n",y,scope);
	return 0;
}