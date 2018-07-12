
///整数的平方和浮点数的平方（函数式宏）

#include <stdio.h>
#include <stdlib.h>

#define sqr(x) ((x)*(x))    //函数式宏：#define sqr(x) ((x)*(x))
                            //对象式宏：#define sqr (x) ((x)*(x))

int main()
{
    int nx;
    double dx;

    printf("请输入一个整数：");
    scanf("%d", &nx);
    printf("该数的平方是：%d\n\n", sqr(nx));

    printf("请输入一个实数：");
    scanf("%lf", &dx);
    printf("该数的平方是：%f\n", sqr(dx));

    return 0;
}
