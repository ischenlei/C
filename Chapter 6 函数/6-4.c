
//������
#include <stdio.h>
#include <stdlib.h>

/*//----����dx��no����----
double power(double dx, int no)
{
    int i;
    double tmp = 1.0;

    for (i = 1; i <= no; i++)
         tmp *= dx;
    return (tmp);
}*/

//----����dx��no����(2)----
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

    printf("������һ��ʵ����");     scanf("%lf", &x);
    printf("������һ��������");     scanf("%d", &n);

    printf("%.2f��%d������%.2f", x, n, power(x, n));

    return 0;
}
