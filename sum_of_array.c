#include<stdio.h>
int main ()
{
	int  a[2],b[2],x;
	printf(" enter your first elements:\n");
	for(x=0;x<2;x++)
	{
		scanf("%d",&a[x]);
	}
	printf(" enter your second elements :\n");
	for (x=0;x<2;x++)
	{
		scanf("%d",&b[x]);
	}
	printf("\n sum of tow arrays :\n");
	for(x=0;x<2;x++)
	{
		printf(" %d",a[x]+b[x]);
	}
		
	
	
	
	return 0;
}