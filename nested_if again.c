#include<stdio.h>
int main ()
{
	int a=22,b=1666,c=66;
	
	if (a>b)
	{
	  if(a>c)
		{
			printf("%d",a);
		}
		else
		{
			printf("%d",c);
		}
	}
	else if (b>c)
	{
		printf("%d",b);
	}
	else
	{
		printf("%d",c);
	}
	
	
	 return 0;
	
}
