
//计算两个整数的平方差
#include <stdio.h>
#include <stdlib.h>

//----返回平方----
int sqr (int x)
{
    return (x * x);
}

//----返回差值----
int diff(int x, int y)
{
    return (x > y ? x - y : y - x);
}

int main()
{
    int kx, ky, kx2, ky2;

    puts("请输入两个整数。");
    printf("整数kx：");       scanf("%d", &kx);
    printf("整数ky：");       scanf("%d", &ky);

    kx2 = sqr(kx);
    ky2 = sqr(ky);
    printf("kx和ky的平方差是%d。\n", diff(kx2, ky2));
                                   //diff(sqr(kx), sqr(ky))

    return 0;
}
