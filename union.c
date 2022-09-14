#include<stdio.h>
union stru
{
	int age;
	char name[20];
	float salary;
};
 int main ()
{
	union stru p;
	scanf("%d\n",&p.age);
	printf("%d\n",p.age);
	
	scanf("%s\n",&p.name);
	printf("%s\n",p.name);
	
	scanf("%f",&p.salary);
		printf("%f",p.salary);
	
//	printf("%d\n",p.age);
	//printf("%s\n",p.name);
	//printf("%f",p.salary);
	return 0;
}