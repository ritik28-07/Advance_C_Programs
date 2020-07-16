#include<stdio.h>
int main()
{
	int a[100],i,f,end,mid,n,search,result=0;
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("to find");
	scanf("%d", &search);
		
	f=0;
	end=n-1;
	
	result=binarysearch(a,search,end,f);
	if(result==-1)
	{
		printf("%d is not in the list", search);
	}
	else
	{
		printf("%d found at %d", search, result);
	}
}
int binarysearch(int a[],int search,int end, int f)	
{
	int mid;

	mid=(f+end)/2;
	
	while(f<=end)
	{
		if(a[mid]<search)
		{
			f=mid+1;
		}
		
		else if(a[mid]==search)
		{
			//printf("%d found at %d", search,m+1); 
			return mid+1;
 			break;
		}
		else
		{
			end=mid-1;
		}
	
		mid=(f+end)/2;
	
	}
	
	if(f>end)
	{
		return -1;
	}
}
