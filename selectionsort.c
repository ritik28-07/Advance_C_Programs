#include<stdio.h>
int main()
{
	int t=0,p=0,i,j,n,m=0,a[100];
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{	
		m=a[i];
		for(j=i;j<n;j++)
		{		
			if(m>=a[j])
			{
				m=a[j];
				p=j;
			}
		}
		t=a[p];
		a[p]=a[i];
		a[i]=t;
	}
	for(i=0;i<n;i++)
	{
			printf("%d ", a[i]);
	}	
}
