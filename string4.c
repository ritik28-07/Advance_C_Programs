#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char s[100]="PROGRAMMING";
	char *p;
	p=s;
	while(*p!='\0')
	{
		printf("%c ", *p);
		p++;
	}
}
