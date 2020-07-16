#include<stdio.h>
int main()
{
	int a[10],n,j,i,temp=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
}
