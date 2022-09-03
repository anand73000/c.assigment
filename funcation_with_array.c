#include<stdio.h>
int fun(int x[3])
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("%d ",x[i]);
	}
	
}

int main()
{
	int a[3];
	int y;
	for(y=0;y<3;y++)
	{
		scanf("%d",&a[y]);
	}
   
	fun(a[y]);
	
	
	return 0;
}