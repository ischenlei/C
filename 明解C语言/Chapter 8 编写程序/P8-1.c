
///请定义一个函数式宏diff(x,y),返回x,y二值之差

#include <stdio.h>
#include <stdlib.h>

#define diff(x, y) ((x) - (y))

int main()
{
    int vx, vy;

    printf("请输入一个整数。\n");
    printf("整数1：");   scanf("%d", &vx);
    printf("整数2：");   scanf("%d", &vy);

    if (vx > vy)
        printf("两数之差为：%d", diff(vx, vy));
    else
        printf("两数之差为：%d", diff(vy, vx));

    putchar('\n');
    return 0;
}
