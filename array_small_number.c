#include<stdio.h>
int main()
{
	int a[3]={56,6,78};
	int sm,x,max,sec_max,larg;
	sm=a[0];
	for(x=0;x<3;x++)
	{
		if(a[x]<sm)
		{
			sm=a[x];
			
		}
	}
	printf("%d ",sm);
	max=a[0];
	for(x=0;x<3;x++)
	{
		if(a[x]>max)
		{
			max=a[x];
		}
	}
	sec_max=a[0];	
	for(x=0;x<3;x++)
	{
		if(a[x]>sec_max && a[x]!=max)
		{
			sec_max=a[x];
		}
		
	}
	printf("%d ",sec_max);
	larg=a[0];
	for(x=0;x<3;x++)
	{
		if(a[x]>larg)
		{
			larg=a[x];
		}
	}
	printf("%d",larg);
	return 0;
}