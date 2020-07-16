#include<stdio.h>
int main()
{
	int a[6][2]={{1,2},{3,4},{5,6},{7,8},{9,0},{1,2}};
	display(a,6,2);
}
void display(int *q,int r, int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ", *(q+i*c+j));
		}
		printf("\n");
	}
}
