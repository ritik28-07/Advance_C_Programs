#include<stdio.h>
#include<string.h>
void display(char s[]);
void display1(char *s);
void display(char s[])
{
	int i;			
	while(s[i]!='\0')
	{
		printf("%c",s[i]);
		i++;
	}
}
void display1(char *s)
{
	int i;
	printf("\n");
	while(*s!='\0')
	{
		printf("%c",*s);
		s++;
	}
}
int main()
{
	char s[]="Welcome";
	display(s);
	display1(s);
	return 0;
}
