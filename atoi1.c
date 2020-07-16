#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s1[10]="1493abcd45";
	int a;
	a=atoi(s1);
	printf("%d",a);
}
/* atoi function converts given string passed to it as an argument into an integer;
the string should start with a number;
this function stops reading from a string as soon as it encounters non numerical characters;


ALL FUNCTIONS ARE DEFINED IN ctype.h
1. isaplha()
2. isdigit()
3. isspace()
4. islower()
5. isupper()
6. isalnum()
7. ispunct()

