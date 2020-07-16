/* 
Before a c program is compiled in a compiler source code is processed by a program called pre-processor and
this process is called pre-processing. Commands used in pre processor are called pre processor directives and
begin with # symbol. There are 4 categories of pre-processing directories;
1. Macro
2. Header file inclusion
3. Conditional compilation
4. Other directives


1.MARCO

#define arraysize 10
int main()
{
int n=5;
for(int i=0;i<n;i++)
printf("%d ",i);
}


#define int char
int main()
{
int a=65;
printf("%d",sizeof(a));         ans=1
}


#define CUBE(a) (a*a*a)
int main()
{
printf("%d",cube(4+5));        4+5*4+5*4+5    =    4+20+20+5    =   49
}


#define sq(a) (a*a)
int main()
{
int a=4,c;
c=sq(a)/4 + 4;				   4*4/4 +4      =     4*1 + 4       =  4+4    = 8
printf("%d",c);
}

#define area(l,b)   l*b
int main()
{
int a=5,b=5;
printf("%d",a*b);
}

2. HEADER FILE INCLUSION

standard files  == #include<   >
user defined files == #include"filename"

3. CONDITIONAL COMPILATION

#define a 10
int main()
{
#ifdef a						#ifdefined
	printf("a is defined");				ans is this if define a 10 is written 
#else
	printf("a is nto defined");         ans is this if define a 10 NOT written
#endif
}

#define N 5
int main()
{
#ifndef N					   #ifnotdefined
	printf("HELLO");
#else
	printf("HI");				ans=HI
#endif
}


#define b 30
int main()
{
#if(b==30)						#if requires a condition like = or !=    
	printf("True");
#else							#ifdef and #ifndef does not conditon
	printf("False");
#endif
}

4. OTHER DIRECTIVES

#define a 10
int main()
{
printf("%d", a);					ans=10
#undef a                         it will undefine the value of a
printf("\n%d",a);					ans=error
}

#define N 5
#ifndef N
#error N not defined                it will print the value of error as     N not defined
#else
int main()
{
printf("%d",N);
}
#endif

*/
