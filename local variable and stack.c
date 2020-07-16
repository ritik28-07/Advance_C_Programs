#include<stdio.h>
#include<stdlib.h>
int *add(int a, int b)
{
int *p;
p=(int*)malloc(sizeof(int));
*p=a+b;
return p;
}
int main()
{
	int a,b;
	int *sum;
	scanf("%d %d", &a, &b);
	sum=add(a,b);
	printf("%d", *sum);
	
}

