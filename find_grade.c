#include<stdio.h>
int main ()
 {
 	int phy,chem,math;
 	float percentage,total;
 	printf("enter marks: \n");
 	scanf("%d%d%d",&phy,&chem,&math);
 	printf("physics=%d\nchemistry=%d\nmaths=%d",phy,chem,math);
 	total=phy+chem+math;
 	printf("\ntotal marks=%.f",total);
    percentage = total/3;
    printf("\npercentage=%.2f",percentage);
    
    if(percentage>=90)
    {
      printf("\ngrade a");
    	
	}
 	else if (percentage>=80)
 	{
 	printf("\ngrade b");	
 	
	}
 	else if (percentage>=60)
 	{
      printf("\ngrade c");
 	
    }
 	else if (percentage>40)
 	{
 		printf("\ngrade d");
	 }
 	else
 	{
 		printf("\nfail");
	 }
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	 return 0;
 }