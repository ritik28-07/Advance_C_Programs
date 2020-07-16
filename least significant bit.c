#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if(num & 1)
        printf("%d 1", num);
    else
        printf("%d 0", num);

    return 0;
}
