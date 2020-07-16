#include<stdio.h>

int main()
{
	int n,a[100],ele,r=0,i;
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("to find");
	scanf("%d", &ele);
	
	r=linearsearch(a ,n, ele);
	if(r==-1)
	{
		printf("%d is not in list", ele);
	}
	else
	{
		printf("%d is found at %d",ele,r);
	}
}
int linearsearch(int a[],int n,int ele)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			return i+1;
			break;
		}
	}
		return -1;
	
	
}

