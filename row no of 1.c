//find the row number that has max n of 1's
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,a[10][10],b[10],r,count,c;
	scanf("%d", &r);
	scanf("%d", &c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		count=0;
		for(j=0;j<c;j++)
		{
			
			if(a[j]==1)
			{
				count++;
			}
		}
		b[i]=count;
	}
	for(i=0;i<r;i++)
	printf("%d", b[i]);
	
}
