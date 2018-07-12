
///计算阶乘

#include <stdio.h>
#include <stdlib.h>

//---返回阶乘的值---
int factorial(int n)
{
    if (n > 0)
        return (n * factorial(n - 1));
    else
        return (1);
}

int main()
{
    int num;

    printf("请输入一个数：");
    scanf("%d", &num);

    printf("该数的阶乘是：%d", factorial(num));

    return 0;
}
