#include<stdio.h>
int main()
{
	int a=12,*p,**q;
	p=&a;
	q=&p;
	
	
	
	
	
	printf("%d\n",p);//6618824
	printf("%d\n",*p);//12
	printf("%d\n",q);//6618820
	printf("%d\n",*q);//6618824
    printf("%d\n",**q);//12
	
	
	return 0;
}