#include<stdio.h>
int main()
{
	int a[100],i,f,l,m,n,search;
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("to find");
	scanf("%d", &search);
	
	f=0;
	l=n-1;
	m=(f+l)/2;
	
	while(f<=l)
	{
		if(a[m]<search)
		{
			f=m+1;
		}
		
		else if(a[m]==search)
		{
			printf("%d found at %d", search,m+1);
			break;
		}
		else
		{
			l=m-1;
		}
	
		m=(f+l)/2;
	
	}
	
	if(f>l)
	{
		printf("%d is not in list", search);
	}
	
	return 0;
}
