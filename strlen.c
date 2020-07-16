#include<stdio.h>
#include<string.h>
int main()
{
	char s[]={'c','o','d','i','n','g','\0','w'};   //ans=6,8        //"Coding" ans=6,8;
	int l;
	l=strlen(s);
	printf("%d", l);
	printf(" %d", sizeof(s));
	return 0;
}
