#include<stdio.h>
int main()
{
	int s[4][2]={{1,2},{3,4},{5,6},{7,8}};
	int (*p)[2]=&s;     //pointer to an array of 2 integers
	int i,j,*pint;
	for(i=0;i<=3;i++)
	{
		p=&s[i];
		pint=(int*)p;
		printf("\n");
		for(j=0;j<=1;j++)
		{
			printf("%d ", *(pint+j));
		}
	}
}
