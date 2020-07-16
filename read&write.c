#include<stdio.h>
int main()
{
	int i,j,n,a[100][100];
	scanf("%d", &n);// int (*p)[5]=array of pointer and each pointer points to p.
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", (*(a+i)+j));
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ", *(*(a+i)+j));              //value=*(*(a+i)+j)
			                                        //address=(*(a+i)+j)
		}
		printf("\n");
		
	}
}
