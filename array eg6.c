#include<stdio.h>
int main()
{
	int a[2][2],n=2;
	print(a,&n);
}
void print(int a[2][2],int *n)
{
	int i,j,s=0;
	for(i=0;i<*n;i++)
	{
		for(j=0;j<*n;j++)
		{
			
			if(i==j)
			{
				s+=pow(a[i][j],2);
			}
			
		}
		printf("%d ", s);
	}	
}
