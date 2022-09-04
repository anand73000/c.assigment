#include<stdio.h>
int fun()
{ 
	int hindi,maths,eng,anuraj;
	float percentage,total;
	scanf("%d%d%d",&hindi,&maths,&eng);
	printf("hindi =%d maths =%d eng =%d",hindi,maths,eng);
	total=hindi+maths+eng;
	printf("\ntotal number =%f",total);
	percentage=total/3;
	printf("\npercantage = %f\n",percentage);
	if(percentage>=80)
	{
		printf("grade A:\n");
	}
	else if(percentage>=70)
    {
   	  	printf("grade B:\n");
    }	
    else if(percentage>=60)
    {
    		printf("grade C:\n");
	}
	else
	{
			printf(" fail:\n");
	}
	 
	 		
}
int main()
{
	fun();
	fun();
	return 0;
}
 