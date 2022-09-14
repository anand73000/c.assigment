#include<stdio.h>
int main()
{
	FILE  *file1;
	char data[30];
	 
	 file1 = fopen("C:\\Users\\menar\\Downloads\\anand.txt","a");
	 scanf("%s",&data);
	 fprintf(file1,"%s",data);
	 fclose(file1);
	 
	 FILE *file2;
	 file2 =fopen("C:\\Users\\menar\\Downloads\\anand.txt","r");
	 scanf(file2,"%s",&data);
	 printf("%s",data);
	 
	return 0;
}