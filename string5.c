#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char *name[]={"John","Smith","Ram"};
	for(i=0;i<3;i++)
	{
		printf("%s ",name[i]);
	}
}

