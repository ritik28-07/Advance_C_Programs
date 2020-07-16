#include<stdio.h>
void prime(int n)
{
	int i;
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			printf("%d\n", i);
			n=n/i;
		}
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	if(n>=2)
	{
		prime(n);
	}
	else
	{
		printf("enter more than 2");
	}
}
