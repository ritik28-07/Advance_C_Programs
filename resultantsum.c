#include<stdio.h>
int add(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
	
}

int main()
{
	int n,a[10],i,result;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	result=add(a,n);
	printf("%d\n",result);
	
}
