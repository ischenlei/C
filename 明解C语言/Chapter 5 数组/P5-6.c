#include <stdio.h>
#include <stdlib.h>
//�������a��double�ͣ�����b��int�ͣ���˵������������ֵ��a��b��ֵ�ֱ��Ƕ��� a = b = 1.5
int main()
{
    double a;
    int b;
    a = b = 1.5;

    printf("a=%d\nb=%d", a, b);

    return 0;
}
