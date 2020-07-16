#include<stdio.h>
int main()
{
	int i,result=0,n;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		result=fibo(i);
		printf("%d ", result);
	}
}
int fibo(int num)
{
	if(num==0)
	{
		return 0;
	}
	else if(num==1)
	{
		return 1;
	}
	else
	{
		return (fibo(num-1)+fibo(num-2));
	}
}
