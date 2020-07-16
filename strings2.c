//read name,roll no, course, branch, clg name, and print these details
#include<stdio.h>
int main()
{
	char na[10],r[10],c[10],b[10],clg[10];
	int length;
	scanf("%[^\n] %[^\n] %[^\n] %[^\n] %[^\n]",na,r,c,b,clg);
	printf("%s %s %s %s %s",na,r,c,b,clg);

	return 0;	
} 
