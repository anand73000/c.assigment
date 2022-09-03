#include<stdio.h>
int main()
{
	int a[] = {2,126,2344,1156};
	int max,x,sec_max;
	max=a[0];
	 for (x=0;x<4;x++)
	 {
	 	if(max<a[x])
	 	{
	 	   max=a[x];
			
		}
		
	 }
	 //max=234
	 sec_max=a[0];
	 for(x=0;x<4;x++)
	 {
         if(sec_max<a[x] && a[x]!=max)
         {
            sec_max=a[x];	
         	
		 }
	 	
	 }
	  printf("%d",sec_max);
	 
	 

	return 0;
}