#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch='10';					// ch='a' gives 0
	printf("%d", isdigit(ch));
}
