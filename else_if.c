#include<stdio.h>
int main()
{
	int a=51,b=71,c=11;
	if(a>b && a>c)
	{
		printf("%d",a);
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