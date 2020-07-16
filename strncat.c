#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100]="World",s2[100]="Hello";
	strncat(s1,s2,3);
	printf("%s",s1);
}
