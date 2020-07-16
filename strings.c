//ascii value is stored not char value
/* char str[]= "HELLO";
		or
   char str[]={'H','E','L','L','O'};
   		or
   char *str="Hello";

"h"=string
'h'=char

char str[10]
scanf("%s",str)

do not use gets function;use this either
scanf("%[^\n]",str);   it is known scanset
printf("%s",str);
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int l;
	scanf("%[^\n]",str);
	l=strlen(str);		//this one work with space between words	//scanf("%s", str); this does not use with spaces
	printf("%s %d",str,l);
	return 0;
}
