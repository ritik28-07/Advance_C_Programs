#include<stdio.h>
int main()
{
	int a[100],n,i,j,p,t;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	i=-1;
	p=a[n-1];
	for(j=0;j<n;j++)
	{
		if(p>a[j])
		{
			i++;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	t=a[i+1];
	a[i+1]=a[n-1];
	a[n-1]=t;
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
}
