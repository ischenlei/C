
///������ƽ���͸�������ƽ��������ʽ�꣩

#include <stdio.h>
#include <stdlib.h>

#define sqr(x) ((x)*(x))    //����ʽ�꣺#define sqr(x) ((x)*(x))
                            //����ʽ�꣺#define sqr (x) ((x)*(x))

int main()
{
    int nx;
    double dx;

    printf("������һ��������");
    scanf("%d", &nx);
    printf("������ƽ���ǣ�%d\n\n", sqr(nx));

    printf("������һ��ʵ����");
    scanf("%lf", &dx);
    printf("������ƽ���ǣ�%f\n", sqr(dx));

    return 0;
}
