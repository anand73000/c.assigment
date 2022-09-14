#include<stdio.h>
struct stru
{
	int age;
	char name[20];
	float salary;

	 
     
};
int main()
{
	
	int test();	
	struct stru p;
	scanf("%d\n",&p.age);
	scanf("%s\n",&p.name);
	scanf("%f",&p.salary);
	
	printf("%d\n",p.age);
	printf("%s\n",p.name);
	printf("%f",p.salary);
	return 0;
}