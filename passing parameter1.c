#include<stdio.h>
void modify(int *b)
{
	*b=*b+10;
	printf("\n%d", *b);
}
int main()
{
	int a=10;
	printf("\n%d", a);
	modify(&a);
	printf("\n%d", a);
}
