#include<stdio.h>
#include<string.h>
char *print(char *s)
{
	s="ABCD";
	return s;
}
int main()
{
	char s[10]="Hello";
	printf("%s", print(s));	
}
