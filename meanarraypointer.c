#include<stdio.h>
float mean(int *a, int *n);
int main()
{
	int a[100],n,i;
	float r=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	r=mean(a,&n);
	printf("%.2f", r);
}
float mean(int *a,int *n)
{
	int i;
	float sum=0;
	for(i=0;i<*n;i++)
	{
		sum=sum+a[i];
	}
	sum=sum/(*n);
	return sum;
}
