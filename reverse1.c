#include<stdio.h>
int main()
{
	int a[100],b,n,i,t,r;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		r=0;
		t=a[i];
		while(a[i]!=0)
		{
			b=a[i]%10;
			r=r*10+b;
			a[i]=a[i]/10;
		}
		if(t==r)
		{
			
			printf("\nequal");
		}
		else
		{
			printf("\nnot equal");
		}
		
	}
}
