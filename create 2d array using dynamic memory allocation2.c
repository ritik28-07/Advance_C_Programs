#include<stdio.h>
#include<stdlib.h>
void print(int **a, int r, int c);
int main()
{
	int i,j,**a,r,c;
	scanf("%d", &r);
	scanf("%d", &c);
	
	print(a,r,c);
	
}
void print(int **a, int r, int c)
{
	int i,j;
	a=(int**)malloc(r*sizeof(int *));
	for(i=0;i<r;i++)
	{
		a[i]=(int*)malloc(c*sizeof(int));
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ", a[i][j]);
		}
	}
}
