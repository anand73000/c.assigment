#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==1 || i==5 || i==9)
		{
			continue;
		}
			printf("%d\n",i);	// 1 ,2,3..., 10 => 6 7 8 9 10
		
	}
	
	return 0;
}