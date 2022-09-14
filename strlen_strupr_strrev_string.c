#include<stdio.h>
int main()
{
	char str[20];
	gets(str);
	
	printf("%d\n",strlen(str));
	puts(strupr(str));
	puts(strlwr(str));
	puts(strrev(str));
	
	return 0;
}