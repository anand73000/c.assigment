#include<stdio.h>
int main ()
{
	int num1,num2;
	char choice;
	printf("enter your choice\n");
	scanf("%c",&choice);
	printf("enter two integer value\n");
	scanf("%d%d",&num1,&num2);
	switch (choice)
	{
		case '+' : printf("%d",num1+num2);
		break;
      	case '-':  printf("%d",num1-num2);
		break;		
    	case '*': printf("%d",num1*num2);
		break;
		case '/':  printf("%d",num1/num2);
		break;	
		default :
			 printf("wrong number");
	
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 return 0;
}