#include<stdio.h>
int main()
{
	int a[3]={12,374,608};
	int max,x,sec_max,last;
	max=a[0];
	for(x=0;x<3;x++)
	{
		if(a[x]>max)
		{
			max=a[x];
		}
	}
	printf("%d ",max);
	sec_max=a[0];	
	for(x=0;x<3;x++)
	{
		if(a[x]>sec_max && a[x]!=max)
		{
			sec_max=a[x];
		}
		
	}
	printf("%d ",sec_max);
	last=a[0];
	for(x=0;x<3;x++)
	{
		if(a[x]>last && a[x]!=sec_max)
		{
			last=a[x];
		}
	}
	
	printf("%d",last);
	return 0;
}