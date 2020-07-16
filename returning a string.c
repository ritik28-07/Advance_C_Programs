#include<stdio.h>
#include<string.h>
char *print()
{
	static char p[]="Hello";
	return p;
}
int main()
{
	char *s=print();
	printf("%c",*s);
	printf(" %s", s);
}// i[s],s[i],*(i+s),*(s+i) all can be used.         
