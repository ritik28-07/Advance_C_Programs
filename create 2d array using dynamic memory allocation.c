#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,**a,r,c;
	scanf("%d", &r);
	scanf("%d", &c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",*((a+i)+j));
		}
	}
	a=(int**)malloc(r * sizeof(int*));
	if(a==NULL)
	{
		printf("Memory not available");
	}
	for(i=0;i<r;i++)
	{
		a[i]=(int*)malloc(c*sizeof(int));
		if(a[i]==NULL)
		{
			printf("memory not available");
		}
	}
}
