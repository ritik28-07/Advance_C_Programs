#include <stdio.h>
int main()
{
    int num, n, newNum;
    scanf("%d", &num);
    scanf("%d", &n);
    newNum = num ^ (1 << n);
    printf("%d",  newNum);
    return 0;
}
