#include<stdio.h>
int main()
{
	int *p,a,**p1,i;
	p=&a;
	p1=&p;
	printf("%d,%d", sizeof (p), p1);
	return 0;
}
