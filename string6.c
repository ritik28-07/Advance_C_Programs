#include<stdio.h>
#include<string.h>
//void o2(int i);
void o1(int i);
//void o3(int i);
void main()
{
	int i=0;
	char *s1="PROGRAMMING";
	char *s2;
	//o2(i);
	o1(i);
	s2=s1;
	printf("%s",s2);
}
/* void o2(int i)
{
	char s[10]="Hello";            this is wrong
	s="World";
	printf("%s",s);
}*/
void o1(int i)
{
	char *s3="Hello";
	s3="World";
	printf("%s",s3);
}
/*void o3(int i)					this is wrong
{
	char s1[10]="programming";
	char s3[10];
	s2=s1;
	printf("%s",s2);
}*/

