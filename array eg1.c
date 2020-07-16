#include<stdio.h>
int main()
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,0,1,2};
	display(a,3,4);
}
void display(int a[3][4],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
