#include<stdio.h>
int rucfun(int x)
{  
   
	if(x>1)
	{
		return x+rucfun(x-1);
	}
	
}
int main()
{
   printf("%d",rucfun(5)); 
   return 0;
}