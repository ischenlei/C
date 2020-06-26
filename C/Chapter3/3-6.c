#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vx,vy;

    printf("整数A：");      scanf("%d",&vx);
    printf("整数B：");      scanf("%d",&vy);

    if(vx==vy)
        puts("它们相等。");
    else
        puts("它们不相等。");
    return 0;
}
