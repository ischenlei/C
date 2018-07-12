
//计算幂
#include <stdio.h>
#include <stdlib.h>

/*//----返回dx的no次幂----
double power(double dx, int no)
{
    int i;
    double tmp = 1.0;

    for (i = 1; i <= no; i++)
         tmp *= dx;
    return (tmp);
}*/

//----返回dx的no次幂(2)----
double power(double dx, int no)
{
    double tmp = 1.0;

    while (no-- > 0)
        tmp *= dx;
    return (tmp);
}

int main()
{
    int n;
    double x;

    printf("请输入一个实数：");     scanf("%lf", &x);
    printf("请输入一个整数：");     scanf("%d", &n);

    printf("%.2f的%d次幂是%.2f", x, n, power(x, n));

    return 0;
}
