#include<stdio.h>
int setBitNumber(int n)
{
int s=n;
    if (n == 0)
        return 0;
 
    int msb = 0;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
    msb--;
  int x;
  x=1<<msb;
  s=s^x;
  return s;
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    printf("%d",setBitNumber(n));
return 0;
}
