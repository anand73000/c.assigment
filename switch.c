/*
switch= when we have multiple choices 
and we need output as per choice entered
*/

#include<stdio.h>
int main ()
{
	int choice;
	scanf("%d",&choice);
	 
    switch (choice)
	{
	  case 1 : printf("hello");
	  	break;
	  case 2 : printf("hii...");
	  	break;
	  case 3 : printf("finally...");
	  	break;	
	  case 4 : printf("mr anand...");
	  	break;
	 default :
	 	printf("wrong....");
	 	
    } 
	   	
		
		
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}