#include<stdio.h>
int main()
{
	int *rtr;
	
	rtr =(int*)calloc(900,sizeof(int));
	if(rtr=NULL)
	{
		printf("memory not allocated");
	}
	else
	{
		printf("memory allocated");
	}
	return 0;
}