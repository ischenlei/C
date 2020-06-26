
//创建一个函数返回int型整数立方
#include <stdio.h>
#include <stdlib.h>

//----返回立方----
int cube(int x)
{
    return (x * x * x);
}

int main()
{
    int kx;

    printf("请输入一个整数：");
    scanf("%d", &kx);

    printf("它的立方是%d", cube(kx));
    return 0;
}
