#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100]="Hello";int n=3;
	strncpy(s1,s2,n);   //string written at frist position is DESTINATION
	printf("%s",s1);
}
