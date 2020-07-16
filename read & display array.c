#include<stdio.h>
void read(int *a, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d", (a+i));     //&a[i] is same thing
	}
}
void display(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d", *(a+i));
	}
}
void main()
{
	int a[20],n;
	scanf("%d", &n);
	read(a,n);
	display(a,n);
}

