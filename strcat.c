#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[12]= "hello ",str2[20]="how are you?";
	strcat(str1,str2);
	printf("%s",str1);
	return 0;
}