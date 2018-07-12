#include <stdio.h>
#include <stdlib.h>

/*int maxof(int x, int y)
{
    if (x > y)
        return (x);
    else
        return (y);
}*/

//返回较大整数的值
int maxof(int x, int y)
{
    return ((x > y)? x : y);
}

int main()
{
    int na, nb;

    puts("请输入两个整数。");
    printf("整数1：");       scanf("%d", &na);
    printf("整数2：");       scanf("%d", &nb);

    printf("较大整数的值:%d", maxof(na, nb));

    return 0;
}
