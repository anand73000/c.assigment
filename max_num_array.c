#include<stdio.h>
int main()
{
	int a[]={2,500,4567};
	int max,x;
   
   max = a[0];//2
   for (x=0;x<3;x++)// 
   {
   	   if(max<a[x]) //2<2 / 
   	   {
   	   	
           max=a[x];

       }

   }	
	
	printf("%d",max);
	
	
	
	
	
	
	
	
	return 0;
}