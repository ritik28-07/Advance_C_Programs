#include<stdio.h>
int main()
{
	char str[10],i,c=0;
	scanf("%[^\n]",str);	//this one work with space between words; //scanf("%s", str); this does not use with spaces
	for(i=0;str[i]!=0;i++)
	c++;					//either give space or use getchar(); //space is used to clear the buffer
	printf("%s %d",str,c);
	return 0;
}
