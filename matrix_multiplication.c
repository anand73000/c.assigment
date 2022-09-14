#include<stdio.h>
int main ()
{
	int a[5][5],b[5][5],temp[5][5];
	int r,c,x;
	printf("enter your first element :\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%d ",a[r][c]);
		}
		printf("\n");
	}
	printf("\nenter your second element :\n");
		for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&b[r][c]);
		}
	}
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%d ",b[r][c]);
		}
		printf("\n");
	}
	
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			temp[r][c]=0;
		  for(x=0;x<2;x++)
		   {
		  	
		  	 temp[r][c] = temp[r][c] + a[r][x]*b[x][c];
		   }	
		  
		}
	}
	printf("\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%d ",temp[r][c]);
		}
		printf("\n");
	}
	
	
	return 0;
}