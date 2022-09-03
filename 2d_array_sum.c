#include<stdio.h>
int main()
{
	int a[3][3],b[3][3];
	int row,col;
	printf("enter your first array elements\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",a[row][col]);
		}
      printf("\n");
	}
	
	 printf("\nenter second array elements\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			scanf("%d",&b[row][col]);
		}
		
	}
		for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",b[row][col]);
		}
       printf("\n");
	}
	printf("\nsum of 2d array :\n");
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d",a[row][col]+b[row][col]);
			
		}
      printf(" \n");		
		
	}
	return 0;
}