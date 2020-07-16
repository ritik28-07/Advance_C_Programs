#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="Smith";
	char s2[]="John";
	char s3[]="Harsh";
	char s4[]="Akshay";
	char s5[]="Ram";
	
	char *p[5];
	p[0]=s1;
	p[1]=s2;
	p[2]=s3;
	p[3]=s4;
	p[4]=s5;
	
	int i;
	for(i=0;i<5;i++)
	printf("%s\n",p[i]);
}
