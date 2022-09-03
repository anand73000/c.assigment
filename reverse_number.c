#include<stdio.h>
int main ()
{
	int num = 1234,rem,x=0;
	
	while (num>0)
	{
	   
	   rem =   num%10; //123%10 =  3 , 2, 1
	   num = num/10; // 123/10 = 12	, 12/10 = 1 , 1/10 = 0
		
	x = rem + 320  ; 
		
		
	}
	  printf("%d",x);
	
	
	
	
	
	return 0;
}