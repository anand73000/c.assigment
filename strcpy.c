#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[12]= "hello",str2[20];
	strcpy(str2,str1);
	printf("%s",str2);
	return 0;
}