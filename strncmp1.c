#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="Hello";			//strcmpi(),atoi() are all same
	char s2[]="HEY";
	int c;
	c=strncmp(s1,s2,2);
	printf("%d",c);
	return 0;
}
