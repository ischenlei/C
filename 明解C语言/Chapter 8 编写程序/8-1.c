
//������ƽ���͸�������ƽ����������

#include <stdio.h>
#include <stdlib.h>

//---int������ƽ��ֵ---
int sqr_int(int x)
{
    return (x * x);
}

//---double�͸�����ƽ��ֵ---
double sqr_double(double x)
{
    return (x * x);
}

int main()
{
    int nx;
    double dx;

    printf("������һ��������");
    scanf("%d", &nx);
    printf("������ƽ���ǣ�%d\n\n", sqr_int(nx));

    printf("������һ��ʵ����");
    scanf("%lf", &dx);
    printf("������ƽ���ǣ�%f\n", sqr_double(dx));

    return 0;
}
