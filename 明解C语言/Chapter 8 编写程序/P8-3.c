#include <stdio.h>
#include <stdlib.h>

#define swap(type, a, b) (type = a, a = b, b = type)

int main()
{
    int vx, vy, type;

    printf("请输入两个整数。\n");
    printf("整数1：");    scanf("%d", &vx);
    printf("整数2：");    scanf("%d", &vy);

    swap(type, vx, vy);
    printf("整数1：%d\n", vx);
    printf("整数2：%d\n", vy);

    return 0;
}
