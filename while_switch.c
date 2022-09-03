#include<stdio.h>
int main ()
{
	int choice ;
	char ch='Y';
	do
	{  
	   printf("enter your choice :");
	   scanf("%d",&choice);
	   switch (choice)
	   {
	   	
	   	case 1 : printf("hii...\n");
	   	break;
	   	case 2 : printf("hello...\n");
	   }
	
	   printf("do you want to continue (Y/N) ???..");
//	   scanf("%c",&ch);
	
	} while (ch=='Y');	
	 
	

	
	
	
	return 0;
}