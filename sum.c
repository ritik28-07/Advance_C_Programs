#include<stdio.h>
int main()
{
	int n,rem=0,sum=0,i,a,j;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
	
	scanf("%d",&n);
}
for(j=0;j<a;j++)
{
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		sum=sum+rem;
	}
	printf("%d",sum);
}

}
