#include<stdio.h>
int getsum(int x,int y)
{
	printf("sum of %d and %d = %d\n",x,y,x+y);
	
}
int main()
{
	int a,b;
	printf("enter first value...");
	scanf("%d",&a);
	printf("enter second value...");
	scanf("%d",&b);
	
		getsum(a,b);
		getsum(55,45);
	
	
	
	
	return 0;
	
}