#include<stdio.h>
int main()
{
	char a[10];
	int i;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65&&a[i]<=90)
		a[i]+=32;
		else
		a[i]-=32;
	}
	puts(a);
}
