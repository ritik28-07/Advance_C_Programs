//write a program to find next greater element for each element on right side of 1d array. 
#include<stdio.h>
int main()
{
	int m,k,i,j,n,a[20],f=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		f=0;
		for(j=i;j<n;j++)
		{
			if(a[i]<a[j])
			{
				for(k=j;k<n;k++)
				{
					if(m>=a[k])
					{
						m=k;
					}
					f=1;
				}
			}
		}
		if(f==1)
		printf("%d--%d\n",a[i],m);
		else
		printf("%d---1\n", a[i]);
		
		
	}
}
