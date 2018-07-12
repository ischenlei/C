#include <stdio.h>
#include <stdlib.h>

//创建一个函数返回int型整数中最小的值。
int minof (int x, int y)
{
    return ((x < y)? x : y);
}
int main()
{
    int na, nb;

    puts("请输入两个整数。");
    printf("整数1：");       scanf("%d", &na);
    printf("整数2：");       scanf("%d", &nb);

    printf("较小整数的值:%d", minof (na, nb) );

    return 0;
}
