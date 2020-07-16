#include<stdio.h>
int main()
{
	int n,marks,count=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&marks);
		
		if(marks>=50)
		count++;
	}
	
		
	
	printf("%d",count);
}
