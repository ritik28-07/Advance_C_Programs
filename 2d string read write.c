#include<stdio.h>
#include<string.h>
int main()
{
	char s[5][10]={0};
	int i,j;
	for(i=0;i<5;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%c",s[i][j]);
		}
		printf("\n");
	}
}
