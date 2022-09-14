#include<stdio.h>
#include<string.h>
int main ()
{
	char str[20]="hello anand";
	int n,length=0;
	for(n=0;str[n]!= '\0';n++)
	{
		length++;
	}
	printf("%d",length);
	return 0;
}