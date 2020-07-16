#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};
	int *p=a;
	int (*ptr)[5]=&a;
	printf("%d %d\n", p, ptr);
	printf("%d %d\n", *p, *ptr);
	printf("%d %d\n", sizeof(p), sizeof(*p));
	printf("%d %d\n", sizeof(ptr), sizeof(*ptr));
}
