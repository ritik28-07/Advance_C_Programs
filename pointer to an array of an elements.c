#include<stdio.h>
int main()
{
	int *p;
	int (*ptr)[5];
	int a[5]={1,2,3,4,5};
	p=a;
	ptr=&a;       //also w orks with &a[0}
	printf("%d %d\n", p, ptr);
	p++;
	ptr++;
	printf("%d %d", p, ptr);
}
