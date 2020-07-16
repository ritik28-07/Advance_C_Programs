// write a program to read a string until * symbol is encountered and print that string and count no. of characters in a string
#include<stdio.h>
#include<string.h>
int main()
{
	char ch,s[100];
	int i;
	while(1)
	{
		ch=getchar();
		if(ch=='*')
		break;
			s[i]=ch;
			i++;
		
	}
	puts(s);
}
