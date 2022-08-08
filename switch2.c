#include<stdio.h>
int main()
{
	int num1,num2,res;
	char choice;
    printf("enter you choice...\n");
	scanf("%c",&choice);
	printf("enter two interger value....\n");
	scanf("%d%d",&num1,&num2);
	
    switch(choice)
	{
		case '+' :printf("%d",num1+num2);
		break;
		case '-' :printf("%d",num1-num2);
		break;
		case '*' :printf("%d",num1*num2);
		break;
		case '/' :printf("%d",num1/num2);
		break;
	    case '%' :printf("%d",num1%num2);
		break;
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}