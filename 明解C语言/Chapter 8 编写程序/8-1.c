
//整数的平方和浮点数的平方（函数）

#include <stdio.h>
#include <stdlib.h>

//---int型整数平方值---
int sqr_int(int x)
{
    return (x * x);
}

//---double型浮点数平方值---
double sqr_double(double x)
{
    return (x * x);
}

int main()
{
    int nx;
    double dx;

    printf("请输入一个整数：");
    scanf("%d", &nx);
    printf("该数的平方是：%d\n\n", sqr_int(nx));

    printf("请输入一个实数：");
    scanf("%lf", &dx);
    printf("该数的平方是：%f\n", sqr_double(dx));

    return 0;
}
