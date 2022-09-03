#include<stdio.h>
int fun(int x)
{
	
	printf("%d",x++);
	printf("\n%d",x);
	
	
}

int main()
{
	int a;
	printf("enter any enteger number :");
	scanf("%d",&a);
	fun(a);
	return 0;
}