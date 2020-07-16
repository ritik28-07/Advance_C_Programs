#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10]="HELLO";
	char s2[10]="WORLD";
	int c;
	c=strcmp(s1,s2);   //subtraction of ascii values is obtained   ascii values of h and w are compared   s1>s2 if ans in +1  s1<s2 if ans in +1  s1=s2 if ans in 0
	printf("%d", c);
}
/* STRING COMPARED FUNCTION RETURNS 0 IF BOTH STRINGS ARE EQUAL*/ 
/* NEGATIVE VALUE IF ASCII VALUE OF FIRST UMATCHED CHARACTER OF FIRST STRING 1 IS LESS THAN ASCII VALUE OF FIRST 
UNMATCHED CHARACTER OF STRING 2    */

/* POSITIVE VALUE IF ASCII VALUE OF FIRST UNMATCHED CHARACTER OF STRING 1 IS GREATER THAN ASCII VALUE OF FIRST 
UNMATCHED CHARACTER OF SECOND STRING  */
