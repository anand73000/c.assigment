#include<stdio.h>
int test  ()
{
		int i=1;
	xyz:
	if(i<=10)
	{
		printf("  %d \n",i);
		i++;
	}
	goto xyz;
	
}
 int main ()
 {
 	test();
 	
 }